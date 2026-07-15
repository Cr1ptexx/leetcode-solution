class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0  , sumEven = 0;
        for(int i = 1 ; i <= n ; i++){
            sumOdd += 2*(i)-1;
        }
        for(int i = 1 ; i <= n ; i++){
            sumEven += 2*(i);
        }
    int ans = sumEven - sumOdd;
    return ans;
    }
    
};