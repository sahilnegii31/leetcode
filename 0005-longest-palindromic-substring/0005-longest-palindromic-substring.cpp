class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.size();
        int st = 0, m = 0;
        for(int i = 0; i < size; i++) {
            // Odd length palindrome
            int left = i;
            int right = i;
            while(left >= 0 && right < size && s[left] == s[right]) {
                if((right - left) > (m - st)) {
                    st = left;
                    m = right;
                }
                left--;
                right++;
            }
            // Even length palindrome
            left = i;
            right = i + 1;
            while(left >= 0 && right < size && s[left] == s[right]) {
                if((right - left) > (m - st)) {
                    st = left;
                    m = right;
                }
                left--;
                right++;
            }
        }

        return s.substr(st, m - st + 1);
    }
};