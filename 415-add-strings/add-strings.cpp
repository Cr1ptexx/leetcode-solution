class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0 ;
        string ans = "";
        int a = num1.size()-1 , b = num2.size()-1;
        while(a>=0 || b>=0 || carry > 0){
            if(a<0 && b<0){
                ans += carry+'0';
                carry = 0;
            }
            else if(a<0){
                int sum = (num2[b] - '0') + carry; 
                if(sum > 9){
                    ans += (char)(sum - 10 + '0');
                    carry = 1;
                }
                else {
                    ans += (char)(sum + '0');
                    carry = 0; 
                }
                b--;
            }

            else if(b<0){
                int sum = (num1[a] - '0') + carry;
                if(sum > 9){
                    ans += (char)(sum - 10 + '0');
                    carry = 1;
                }
                else {
                    ans += (char)(sum + '0');
                    carry = 0;
                }
                a--;
            }
            else{
                if(num1[a]+num2[b]-'0' + carry > '9'){
                    ans += (num1[a]+num2[b]-'0'+carry)-10;
                    carry = 1;
                }   
                else{ 
                    ans += num1[a]+num2[b]-'0'+carry;
                    carry = 0;
                }
                a--; b--;
            }
        }
    reverse(ans.begin() , ans.end());
    return ans;
    }
};