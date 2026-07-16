class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> PrefixGcd; int max = 0;
        for(int n : nums){
            if(n>max) max = n;
            PrefixGcd.push_back(gcd(n , max));
        }
        sort(PrefixGcd.begin() , PrefixGcd.end());
        auto start = PrefixGcd.begin() , end = PrefixGcd.end()-1;
        long long int sum = 0;
        while(start < end){
            pair<int,int> p = {*(start) , (*end)};
            sum += gcd(p.first , p.second);
            start++; end--;
        }
        return sum;
    }
};