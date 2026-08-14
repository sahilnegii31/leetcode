class Solution {
public:
    int trap(vector<int>& height) {
      int n = height.size();
      int lf = 0 ;
      int rt = n-1;
      int lmax = 0 , rmax = 0, ans = 0;
      while ( lf < rt){
         lmax = max(lmax , height[lf]);
         rmax = max(rmax , height[rt]);

         if(lmax < rmax ){
            ans += lmax - height[lf];
            lf++;
         }
         else { 
            ans += rmax - height[rt];
            rt--;
         }
      }
      return ans ; 

    }
};