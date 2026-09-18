class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        int count = 0;
        int currChar = chars[0];
        for(int i = 0 ; i < n ; i++ ){
            if(chars[i] == currChar){
                count++;
            }
            else {
                chars[idx] = currChar;
                idx++;
                if(count > 1) {
                    string s = to_string(count);
                    for(char c : s) {
                        chars[idx] = c;
                        idx++;
                    }
                }
                currChar = chars[i];
                count = 1;
            }
        }
        chars[idx] = currChar;
        idx++;

        if(count > 1) {
            string s = to_string(count);
            for(char c : s) {
                chars[idx] = c;
                idx++;
            }
        }

        return idx;
    }
};