class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char , int>mp;
        int n = sentence.size();
        for(int i = 0 ; i < n ; i++){
            if(mp.find(sentence[i]) == mp.end()){
                mp.insert({sentence[i] , 1});
            }
        }
        if(mp.size() != 26) return false;
        return true;
    }
};