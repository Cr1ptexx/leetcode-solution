class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> answer(n,0);
        stack<int> st;
        int pos1 , pos2 , id , ts , prevTs = 0;
        string sign;
        for(string x : logs){
            pos1 = x.find(':');
            pos2 = x.find(':' , pos1+1);
            id = stoi(x.substr(0, pos1));
            sign = x.substr(pos1 + 1, pos2 - pos1 - 1);
            ts = stoi(x.substr(pos2 + 1));
            if(sign == "start"){
                if (!st.empty()) {
                answer[st.top()] += ts - prevTs;
            }
                st.push(id);
                prevTs = ts;
            }
            else{
                answer[st.top()] += ts-prevTs+1;
                st.pop();
                prevTs = ts+1;
            }
        }
        return answer;
    }
};