class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> list;
        set<int> ans;
        for(string &i : timePoints){
            int hour = stoi(i.substr(0,2));
            int miniute = stoi(i.substr(3,2));
            int total = (hour*60)+miniute;
            list.push_back(total);
        }
        sort(list.begin() , list.end());
        for(auto it = list.begin() ; it<list.end()-1 ; it++){
            int total1 = *(it+1)-*it;
            ans.insert(total1);
        }

        int crossDayDiff = (1440 - list.back()) + list.front();
        ans.insert(crossDayDiff);
        
        return *(ans.begin());
    }
};