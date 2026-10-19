class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        recur(nums , current , 0);
        return result;
    }
    void recur(vector<int> &nums , vector<int> &current , int index){
        if(index == nums.size()){
            result.push_back(current); return;
        }
        current.push_back(nums[index]);
        recur(nums , current , index+1);
        current.pop_back();
        recur(nums , current , index+1);
    }
};