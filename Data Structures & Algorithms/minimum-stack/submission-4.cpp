class MinStack {
private:
    struct Entry {
        int value;
        int minimum;
    };

    vector<Entry> stack_;

public:
    MinStack() = default;
    
    void push(int val) {
        const int currMinimum = stack_.empty() ? val : min(val, stack_.back().minimum);
        
        stack_.push_back({val, currMinimum});
    }
    
    void pop() {
        stack_.pop_back();
    }
    
    int top() {
        return stack_.back().value;
    }
    
    int getMin() {
        return stack_.back().minimum;
    }
};
