class Solution {
public:
    int mySqrt(int x) {
        int i = 1;
        while(i < x/i && i <= x/2){
            i++;
        }
        if(i == x/i) return i;
        else return i-1;
    }
};