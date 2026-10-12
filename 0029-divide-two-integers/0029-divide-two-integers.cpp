class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long a = dividend;
        long long b = divisor;

        bool negative = (a < 0) != (b < 0);

        if (a < 0) a = -a;
        if (b < 0) b = -b;

        long long ans = 0;

        while (a >= b) {
            long long chunk = b;
            long long count = 1;

            while (a >= (chunk << 1)) {
                chunk <<= 1;
                count <<= 1;
            }

            a -= chunk;
            ans += count;
        }

        if (negative) ans = -ans;

        return (int)ans;
    }
};