class Solution {
public:
    int lengthOfLastWord(string s) {
       int e = s.size()-1;
       int c = 0;
    for(int i=0 ; i<s.size() ; i++){
        if(c > 0 && s[e] == ' ') break;
        if(s[e] == ' '){
            e--;
        }
        else {
            c++;
            e--;
        }
    }
    return c;
    }
};