class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int c=nums.size();
        k = k - c*(k/c);
        int temp; 
        for(int i = 0 , j = nums.size()-1;i<j;i++,j--){
            temp = nums[i];
            nums[i]=nums[j];
            nums[j] = temp;
        }
        for(int i=0 , j=k-1 ;i<j;i++,j--){
            temp = nums[i];
            nums[i]=nums[j];
            nums[j] = temp;
        }
        for(int i=k , j = nums.size()-1 ; i<j ;i++ , j--){
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
};