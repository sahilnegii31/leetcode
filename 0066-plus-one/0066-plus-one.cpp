class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carr = 0;
        for(int i = digits.size()-1 ; i >=0 ; i--){
            if(i == digits.size()-1){
                if(digits[i] == 9){   
                    digits[i] = 0 ;
                    carr = 1;
                }
                else { 
                    digits[i] += 1;
                }
            }
            else if(digits[i] == 9 && carr ==1){
                digits[i] = 0;
                carr = 1;
            }
            else { 
                digits[i]+=carr;
                carr = 0;
            }
        }
        if(digits[0] == 0 && carr == 1 ){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};