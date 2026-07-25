class MinStack {
private:
    vector<pair<int, int>> _stack;
public:
    MinStack() {
    }
    
    void push(int val) {
        if (_stack.empty()) {
            _stack.emplace_back(val, val);
        } else {
            _stack.emplace_back(val, min(val, _stack.back().second));
        }
    }
    
    void pop() {
        _stack.pop_back();
    }
    
    int top() {
        return _stack.back().first;
    }
    
    int getMin() {
        return _stack.back().second;
    }
};
