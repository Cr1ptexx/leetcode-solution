class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> list(30 , 0);
        for(int x : nums){
            list[x+10]++;
        }
        vector<int> current;
        recur(list , current , nums.size());
        return result;
    }
    void recur(vector<int>&list , vector<int> current , int index){
        if(current.size() == index){
            result.push_back(current);
            return;
        }
        for(int i = 0 ; i < list.size() ; i++){
            if(list[i] != 0){
                current.push_back(i-10);
                list[i]--;
                recur(list , current , index);
                current.pop_back();
                list[i]++;
            } 
        }
    }
};