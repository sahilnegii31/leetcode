class Solution {
public:
    int maxArea(vector<int>& height) {
        int lf = 0 ; 
        int rt = height.size()-1;
        int ans = 0;
        while(lf < rt){
            int w = rt - lf ;
            if(ans < w * (min(height[lf] , height[rt]))){
                ans = w * min(height[lf] , height[rt]);
            } 
            height[rt] < height[lf] ? rt-- : lf++;
        }
        return ans;
    }
};