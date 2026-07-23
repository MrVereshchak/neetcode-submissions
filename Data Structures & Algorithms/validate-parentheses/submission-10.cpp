class Solution {
public:
    bool isValid(const string &s) {
        if (s.size() % 2 != 0) {
            return false;
        }

        stack<char> openPars;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                openPars.push(ch);
            } else {
                if (openPars.empty()) {
                    return false;
                }

                char closedPar = ch;
                char openPar = openPars.top();
                openPars.pop();

                if (!(openPar == '(' && closedPar == ')') &&
                    !(openPar == '{' && closedPar == '}') &&
                    !(openPar == '[' && closedPar == ']')) {
                        return false;
                    }
            }
        }

        return openPars.size() ? false : true;
    }
};
