class Solution {
public:
    string removeDuplicates(string s) {
       stack<char> st;
       for(char x : s){
            if(!st.empty() && st.top()==x){
                st.pop();
            }
            else st.push(x);
       }
       string ans = "";
       while(!st.empty()){
            ans = st.top() + ans; st.pop();
       }
       return ans;
    }
};