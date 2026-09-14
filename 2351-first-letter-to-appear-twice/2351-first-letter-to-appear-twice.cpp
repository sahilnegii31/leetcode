class Solution {
public:
    char repeatedCharacter(string s) {
        int n = s.size();
        unordered_set<char>set;
        for(int i = 0 ; i < n ; i++){
            if(set.find(s[i]) == set.end()){
                set.insert(s[i]);
            }
            else return s[i];
        }
        return s[0];
    }
};