class Solution {
public:
    int val(char s ){
        if(s == 'M') return 1000;
        if(s == 'D') return 500;
        if(s == 'C') return 100;
        if(s == 'L') return 50;
        if(s == 'X') return 10;
        if(s == 'V') return 5;
        if(s == 'I') return 1;
        return 0;
    }

    int romanToInt(string s) {
        int ans=0;
        int end = s.size()-1;
        for(int i=0 ; s[i]!='\0' ; i++){
        if(val(s[i]) >= val(s[i+1])){
            ans += val(s[i]);
        }
        else if(val(s[i]) < val(s[i+1])){
            ans += val(s[i+1]) - val(s[i]);
            i++;
        }
        }
        return ans;
    }
};