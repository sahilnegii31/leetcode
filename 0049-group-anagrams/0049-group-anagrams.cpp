class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>>ans;
        unordered_map<string , vector<string>>mp;
        for(int i = 0 ; i < n ; i++){
            vector<int>freq(26 , 0);
            for(int j = 0 ; j < strs[i].size() ; j++){
                freq[strs[i][j] - 'a']++;
            }

            //making unique hash key to store anagram's with the same key in a map 
            string hash ;   
            for(int k = 0 ; k < 26 ; k++){
                hash += to_string(freq[k]);
                hash += "#";
            }
            if(mp.find(hash) == mp.end()){
                mp.insert({ hash , {strs[i]} });
            }
            else{
                mp[hash].push_back(strs[i]);
            }
        }
        for(auto &it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};