class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = 1 , carry = 0;
        auto x = digits.end()-1;
        while(i >= 1 || carry != 0){
            while(*x == 9){
                *x = 0; carry = 1;
                if(x==digits.begin()){
                    digits.insert(digits.begin(), 0);
                    x = digits.begin();
                    i=0;
                    break;
                }
                x--;
                i = 0;
            }
            *x += i+carry;
            i = 0; carry = 0;
        }
    return digits;
    }
};