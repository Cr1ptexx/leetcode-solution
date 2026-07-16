class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> PrefixGcd; int maxi = 0;
        for(int n : nums){
            if(n>maxi) maxi = n;
            PrefixGcd.push_back(gcd(n , maxi));
        }
        sort(PrefixGcd.begin() , PrefixGcd.end());
        auto start = PrefixGcd.begin() , end = PrefixGcd.end()-1;
        long long int sum = 0;
        while(start < end){
            sum += gcd(*(start) , *(end));
            start++; end--;
        }
        return sum;
    }
};