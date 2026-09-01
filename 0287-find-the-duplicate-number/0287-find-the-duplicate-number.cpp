class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int , int >m;
        for(int i = 0 ; i < nums.size() ; i++){
            if(m.find(nums[i]) == m.end()){
                m.insert({nums[i] , 0});
            }
            else {
                m[nums[i]]++;
            }
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(m[nums[i]] > 0 ) return nums[i];
        }
        return -1;
    }
};