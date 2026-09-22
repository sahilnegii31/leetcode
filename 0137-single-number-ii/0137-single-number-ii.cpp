class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int , int> freq;
        for(int i = 0 ; i< nums.size() ; i++){
            if(freq.find(nums[i]) == freq.end()){
                freq.insert({ nums[i] , 1 });
            }
            else{
                freq[nums[i]]++;
            }
        }
        for(int i = 0; i < nums.size() ; i++){
            if(freq[nums[i]] == 1 ) return nums[i];
        }
        return -1;
    }
};