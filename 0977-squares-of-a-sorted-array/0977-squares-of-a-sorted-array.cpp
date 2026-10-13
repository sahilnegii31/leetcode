class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            nums[i]*= nums[i];
        }
        vector<int>ans(n);
        for(int i = 0 , j = n-1 ; i <= j ;){
            if(nums[i] > nums[j]){
                ans[n-1] = nums[i];
                n--;
                i++;
            }
            else{
                ans[n-1] = nums[j];
                n--;
                j--;
            }
        }
        return ans;
    }
};