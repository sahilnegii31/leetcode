class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minimum = 1e9;
        int left = 0;
        int sum = 0;
        for(int right = 0 ; right < n ; right++){
            sum+= nums[right];
            while(sum>=target){
                minimum = min(minimum , right - left + 1);
                sum -= nums[left++];
            }
        }
        return minimum == 1e9 ? 0 : minimum;
    }
};