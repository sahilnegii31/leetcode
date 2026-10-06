class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int , int>mp;
        vector<int>ans;
        for(int i = 0 ; i < nums.size(); i++){
            if(mp.find(nums[i]) == mp.end()){
                mp.insert({ nums[i] , 1 });
            }
            else{
                mp[nums[i]]++;
            }
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(mp[nums[i]] > nums.size()/3){
                ans.push_back(nums[i]);
                mp.erase(nums[i]);
            }
        }
        return ans;
    }
};