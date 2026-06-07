class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i = 0; i < s.length(); i++){
            char temp = s[i];
            if(temp == '[' || temp == '{' || temp == '('){
                st.push(temp);
            }
            else if(temp == ']'){
                if(!st.empty() && st.top() == '['){
                    st.pop();
                }
                else return false;
            }
            else if(temp == '}'){
                if(!st.empty() && st.top() == '{'){
                    st.pop();
                }
                else return false;
            }
            else if(temp == ')'){
                if(!st.empty() && st.top() == '('){
                    st.pop();
                }
                else return false;
            }
        }
        return st.empty();
    }
};
