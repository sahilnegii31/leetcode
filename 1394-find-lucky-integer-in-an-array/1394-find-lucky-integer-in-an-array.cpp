class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size() ;
        unordered_map<int , int>mp;
        for(int i = 0 ; i < n ; i++){
            if(mp.find(arr[i]) == mp.end()){
                mp.insert({arr[i] , 1});
            }
            else mp[arr[i]]++ ;
        }
        int max = -1;
        for(int i = 0 ; i < n ; i++){
            if(mp[arr[i]] == arr[i] && max < arr[i]) max = arr[i];
        }
        return max;
    }
};