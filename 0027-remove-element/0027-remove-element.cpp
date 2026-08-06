class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int p1 = 0;
       int p2 = nums.size()-1;
       int c = 0;
       while(p1 <= p2){
        if(nums[p2] == val){
            p2--;
            c++;
            continue;
        }
        if(nums[p1] == val ){
            int temp = nums[p1];
            nums[p1] = nums[p2];
            nums[p2] = temp ;
            p1++;
            p2--;
            c++; 
        }
        else p1++;
       }
       return nums.size()-c;
    }
};