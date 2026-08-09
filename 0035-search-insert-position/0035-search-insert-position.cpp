class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st=0,end = nums.size();
        int p = 0;
        if(target < nums[0]) return 0;
        for(int i = 0 ;i<nums.size();i++){
            int mid = st + (end-st)/2;
            if(nums[mid] < target){
                st = mid;
            }
            if(nums[mid] > target){
                end = mid;
            }
            if(nums[mid] == target){
                return mid;
            }
            p = mid+1;
        }
        return p;
    }
};