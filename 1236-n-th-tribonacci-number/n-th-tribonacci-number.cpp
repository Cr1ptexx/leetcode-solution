class Solution {
public:
    vector<int> memo = vector<int>(38,0);
    int recur(int n){
        if(n==2) return 1;
        else if(n<=1) return n;
        if(memo[n] != 0) return memo[n];
        return memo[n] = recur(n-1) + recur(n-2) + recur(n-3);
    }
    int tribonacci(int n) {
        return recur(n);
    }
};