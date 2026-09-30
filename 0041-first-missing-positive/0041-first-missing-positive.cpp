class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        vector<bool> present(n + 2, false);

        for (int x : nums) {
            if (x > 0 && x <= n) {
                present[x] = true;
            }
        }

        for (int i = 1; i <= n + 1; i++) {
            if (!present[i]) {
                return i;
            }
        }

        return n + 1;
    }
};