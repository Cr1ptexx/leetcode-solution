class Solution {
public:
string decodeString(string s) {
    stack<string> st;
    string cur = "";
    int i = (int)s.length() - 1;

    while (i >= 0) {
        if (isalpha((unsigned char)s[i])) {
            cur = s[i] + cur;
            i--;
        } else if (s[i] == ']') {
            st.push(cur);
            cur = "";
            i--;
        } else if (s[i] == '[') {
            i--;
            string numStr = "";
            while (i >= 0 && isdigit((unsigned char)s[i])) {
                numStr = s[i] + numStr;
                i--;
            }
            int num = numStr.empty() ? 1 : stoi(numStr);
            string inside = cur;
            string repeated = "";
            for (int k = 0; k < num; k++) repeated += inside;
            string suffix = st.empty() ? "" : st.top();
            if (!st.empty()) st.pop();
            cur = repeated + suffix;
        } else {
            i--;
        }
    }
    return cur;
}
};