class Solution {
public:
    vector<int> memo = vector<int>(46,0);
    int recur(int n){
        int count = 0;
        if(memo[n] != 0) return memo[n];
        if(n <= 2) return n;
        return memo[n] = recur(n - 1) + recur(n - 2);
    }
    int climbStairs(int n) {
        return recur(n);
    }
};