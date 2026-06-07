class MinStack {
public:
    stack<int>s;
    stack<int>as;
    MinStack() {
        
    }
    void push(int val) {
        if(s.empty()){
            s.push(val);
            as.push(val);
        }
        else if(val <= as.top()){
            s.push(val);
            as.push(val);
        }
        else s.push(val);
    }
    
    void pop() {
        if(s.empty()){
            return;
        }
        else if(s.top() == as.top()){
            s.pop();
            as.pop();
        }
        else{
            s.pop();
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return as.top();
    }
};
