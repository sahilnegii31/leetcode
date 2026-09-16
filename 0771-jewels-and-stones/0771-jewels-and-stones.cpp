class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char , int>m;
        int ans = 0;
        for(int i = 0 ; i < stones.size() ; i++){
            if(m.find(stones[i]) == m.end()){
                m.insert({stones[i] , 1});
            }
            else{
                m[stones[i]] = m[stones[i]] + 1;
            }
        }
        for(int i = 0 ; i < jewels.size() ; i++){
            if(m.find(jewels[i]) != m.end()){
                ans += m[jewels[i]];
            }
        }
        return ans;
    }
};