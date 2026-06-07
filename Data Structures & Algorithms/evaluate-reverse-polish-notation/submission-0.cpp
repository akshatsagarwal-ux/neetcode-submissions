class Solution {
public:
    bool isOperator(string s){
        return s == "+" || s == "-" || s == "*" || s == "/";
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(int i = 0; i < tokens.size(); i++){
            if(!isOperator(tokens[i])){
                s.push(stoi(tokens[i]));
            }
            else{
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                if(tokens[i] == "+"){
                    s.push(a+b);
                }
                else if(tokens[i] == "-"){
                    s.push(a-b);
                }
                else if(tokens[i] == "*"){
                    s.push(a*b);
                }
                else if(tokens[i] == "/"){
                    s.push(a/b);
                }
            }
        }
        return s.top();
    }
};
