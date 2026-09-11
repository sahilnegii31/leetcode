class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char , string >m;
        unordered_map<string , char>mp;
        int j = 0;
        for(int i = 0 ; i < pattern.size() ; i++){
            string st ;
            if(j == s.size()) return false;
            while(j < s.size() && s[j] != ' '){
                st += s[j];
                j++;
            }
            if(s[j] == ' ') j++;
            if(m.find(pattern[i]) == m.end()){
                if(mp.find(st) == mp.end()){
                    m.insert({pattern[i] , st });
                    mp.insert({st , pattern[i]});
                }
                else return false;
            }
            else{
                if(m[pattern[i]] != st) {
                    return false;
                }
            }
        }
        if(j < s.size()) return false;
        return true;
    }
};