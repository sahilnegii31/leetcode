class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left = 0;
       int right = 0;
       int max_len = 0;
       unordered_map<char , int>m;
       while(right != s.size()){
        if(m.find(s[right]) == m.end()){
            m.insert({s[right] , right });
            max_len = max(max_len , right-left+1);
            right++;
        }
        else{
            left = max(left , m[s[right]] + 1 );
            m[s[right]] = right;
            max_len = max(max_len , right-left+1);
            right++;
        }
       } 
       return max_len; 
    }
};