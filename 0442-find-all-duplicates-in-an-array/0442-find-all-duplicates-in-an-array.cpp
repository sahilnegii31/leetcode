class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>freq(nums.size() +1  , 0);
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            freq[nums[i]] += 1;
        }
        for(int i = 0 ; i < freq.size() ; i++){
            if(freq[i] > 1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};