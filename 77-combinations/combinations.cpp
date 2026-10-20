class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> combine(int n, int k) {
        vector<int> list(n+1 , 0);
        for(int i = 1 ; i <= n ; i++){
            list[i]++;
        }
        vector<int> cur;
        recur(list , cur , k , 1);
        return result;
    }
    void recur(vector<int> list , vector<int> cur , int k , int start){
        if(cur.size() == k){
            result.push_back(cur);
            return;
        }
        for(int i = start ; i < list.size() ; i++){
            if(list[i] != 0){
                cur.push_back(i);
                list[i]--;
                recur(list , cur , k , i);
                cur.pop_back();
                list[i]++;
            }
        }
    }
};