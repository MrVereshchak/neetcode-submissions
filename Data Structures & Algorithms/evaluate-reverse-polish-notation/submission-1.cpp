class Solution {
public:
    int evalRPN(const vector<string> &tokens) {
        stack<int> numbers;

        for (const string &token : tokens) {
            if (token == "+") {
                int operand1 = numbers.top();
                numbers.pop();
                int operand2 = numbers.top();

                numbers.top() = operand2 + operand1;
            } else if (token == "-") {
                int operand1 = numbers.top();
                numbers.pop();
                int operand2 = numbers.top();

                numbers.top() = operand2 - operand1;
            } else if (token == "*") {
                int operand1 = numbers.top();
                numbers.pop();
                int operand2 = numbers.top();

                numbers.top() = operand2 * operand1;
            } else if (token == "/") {
                int operand1 = numbers.top();
                numbers.pop();
                int operand2 = numbers.top();

                numbers.top() = operand2 / operand1;
            } else {
                numbers.push(stoi(token));
            }
        }

        return numbers.top();
    }
};
