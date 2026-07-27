class Solution {
public:
    int evalRPN(const vector<string> &tokens) {
        stack<int> numbers;

        for (const string &token : tokens) {
            bool isOperator = (
                token.size() == 1 && 
                (token == "+" || 
                token == "-" || 
                token == "*" || 
                token == "/"));

            if (!isOperator) {
                numbers.push(stoi(token));
                continue;
            }

            int operand1 = numbers.top();
            numbers.pop();
            int operand2 = numbers.top();

            switch(token[0]) {
                case '+': 
                    numbers.top() = operand2 + operand1;
                    break;
                case '-': 
                    numbers.top() = operand2 - operand1;
                    break;
                case '*': 
                    numbers.top() = operand2 * operand1;
                    break;
                case '/': 
                    numbers.top() = operand2 / operand1;
                    break;
            }
        }

        return numbers.top();
    }
};
