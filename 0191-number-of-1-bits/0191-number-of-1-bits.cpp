class Solution {
public:
    int hammingWeight(int n) {
        int c = 0;
        while(n!=0){
            int num = n & 1;
            if(num == 1) c++;
            n = n >> 1;
        }
        return c;
    }
};