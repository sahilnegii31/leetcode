class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(int i = 0 ; i < nums.size() ; i++){
            s.insert(nums[i]);
        }
        if(s.size() >= 3){
            return *(prev(s.end(),3));
        }
        else return *(prev(s.end()));
    }
};