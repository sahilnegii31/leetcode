class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans;
        sort(strs.begin() , strs.end());
        int l = 0;
        for(int i = 0 , j = 0 ; i < strs[0].size() ; i++ , j++){
            if(strs[0][i] != strs[n-1][j]){
                l = i-1;
                break;
            }
            ans.push_back(strs[0][i]);
        }
        return ans;
    }
};