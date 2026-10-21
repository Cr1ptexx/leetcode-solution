class Solution {
public:
    vector<vector<int>> result;
    vector<int> list = vector<int>(21, 0);
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> cur;
        for(int x : nums){
            list[x+10]++;
        }
        recur(list , cur , 0);
        return result;
    }
    void recur(vector<int>& list , vector<int> cur , int start){
        result.push_back(cur);
        for(int i = start ; i < list.size() ; i++){
            if(list[i] != 0){
                cur.push_back(i-10);
                list[i]--;
                recur(list , cur , i);
                cur.pop_back();
                list[i]++;
            }
        }
    }
};