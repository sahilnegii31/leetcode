class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map< char , int > mp;
        queue<int> q;
        for(int i = 0; s[i] != '\0' ; i++ ){
            if(mp.find(s[i]) == mp.end()){
                mp.insert({s[i] , 1} );
                q.push(i);
                continue;
            }
            if(mp.find(s[i]) != mp.end()){
                mp[s[i]] += 1; 
            }
        }
        while(!q.empty()){
            if(mp[s[q.front()]] == 1) return q.front();
            if(mp[s[q.front()]] > 1){
                q.pop();
            }
        }
        return -1;
    }
};