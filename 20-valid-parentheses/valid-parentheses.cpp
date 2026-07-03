class Solution {
public:
    bool isValid(string s) {
        stack<char> list;
        bool find = true;
        for(char x : s){
            if(x=='(' || x == '{' || x == '[') list.push(x);
            if(!list.empty()){
            if(x==')'){
                if(list.top() != '(' ) {
                    find = false; 
                }
                else list.pop();
            }
            else if(x=='}'){
                if(list.top() != '{'){
                    find = false; 
                }
                else list.pop();
            }
            else if(x==']'){
                if(list.top() != '[') {
                    find = false;
                }
                else list.pop();
            }
            }
        else return false;
        }
    if(!list.empty()) return false;
    return find;
    }
};