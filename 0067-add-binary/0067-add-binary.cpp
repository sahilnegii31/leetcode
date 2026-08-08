class Solution {
public:
    string addBinary(string a, string b) {
        stack<char> s;
        string str1="";
       int i=a.size()-1;
       int carry = 0;
       int j = b.size()-1;
       for(i,j;i>=0 || j>=0 ||carry ;i--,j--){
        int bit1 = 0;
        int bit2 = 0;
        if(i>=0) bit1=a[i] - '0';
        if(j>=0) bit2 =b[j] - '0';
        int sum = bit1 + bit2 + carry ; 
        s.push((sum%2)+'0');
        carry = sum/2;
       } 
       vector<char> str;
       for(int k=0;!s.empty();k++){
        str1 +=s.top(); 
        cout << s.top() << "";
        s.pop();
       }
       return str1;
    }
};