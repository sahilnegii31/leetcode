class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n == 1 ) return ;
        for(int i = 0 , j = 0 ; i < n && j < n ; i++){
            if(nums[j] == 0 && nums[i] != 0){
                swap(nums[j] , nums[i]);
                j++;
            }
            else if(nums[j] != 0 ) j++;
        }
    }
};