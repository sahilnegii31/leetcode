class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char , int >m; 
        for(int i = 0 ; i < t.size() ; i++){
            if(m.find(t[i]) == m.end()){
                m.insert( {t[i] , 1} );
            }
            else{
                m[t[i]] += 1; 
            }            
        }
        for(int i = 0;i<s.size() ; i++){
            if(m.find(s[i]) != m.end() ){
                m[s[i]] -=1;
            }
        }
        for(int i = 0 ; i < t.size() ; i++ ){
            if(m[t[i]] == 0){
                continue;
            }
            else return t[i];
        }
        return ' ';
    }
};