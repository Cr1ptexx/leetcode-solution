class Solution {
public:
    vector<int> memo = vector<int>(301 , -1); //ใช้เก็บ bool ว่า solve ตรงนี้มี index ไหม
    bool recur(string s , vector<string> & wordDict , int cur){
        if (cur == s.size()) return true;
        if (memo[cur] != -1) return memo[cur];
        for(int i = 0 ; i < wordDict.size() ; i++){
            if(s.substr(cur , wordDict[i].length()) == wordDict[i]){
                int next = cur + wordDict[i].length();
                if(recur(s , wordDict , next)) return memo[cur] = 1;
            }
        }
        return memo[cur] = 0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        return recur(s, wordDict, 0);
    }
};