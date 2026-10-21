class Solution {
public:
    map<int , vector<string>> dict = {
        {2 , {"a","b","c"}},
        {3, {"d","e","f"}},
        {4 , {"g","h","i"}},
        {5 , {"j" , "k" , "l"}},
        {6 , {"m" , "n" , "o"}},
        {7 ,{"p" , "q" , "r" , "s"}},
        {8,{"t","u","v"}},
        {9,{"w" , "x" , "y" , "z"}}
    };
    vector<string> results;
    vector<string> letterCombinations(string digits) {
        recur(dict , digits , "" , 0);
        return results;
    }
    void recur(map<int , vector<string>> dict , string digits , string cur , int start){
        if(cur.length() == digits.length()){
            results.push_back(cur);
            return;
        }
        for(int j = 0 ; j < dict[digits[start] - '0'].size() ; j++){
            cur = cur + dict[digits[start] - '0'][j];
            recur(dict , digits , cur , start+1);
            cur.pop_back();
        }
    }
};