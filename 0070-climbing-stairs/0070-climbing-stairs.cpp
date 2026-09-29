class Solution {
public:
    int climbStairs(int n) {
        int curr = 1;
        int prev = 1;
        int next;
        for(int i = 2 ; i <= n ; i++){
            int next = curr + prev;
            prev = curr;
            curr = next;
        }
        return curr;
    }
};