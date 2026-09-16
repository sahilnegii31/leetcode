class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0 ;
        long long l = 1000;
        if(n<l) return 0;
        while(n>=l){
            ans += (n-l+1);
            l *= 1000;
        }
        return ans;
    }
};