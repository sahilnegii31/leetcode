class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c = 0 , j = 0 , k = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0) c++;
            else if(nums[i] == 1) j++;
            else k++;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            while(c != 0){
                nums[i] = 0;
                i++;
                c--;
            }
            while(j != 0){
                nums[i] = 1;
                i++;
                j--;
            }
            while( k != 0){
                nums[i] = 2;
                i++;
                k--;
            }
        }
    }
};