class Solution {
public:

    string code = "&$*()";

    string encode(vector<string>& strs) {
        string message;
        for (const string &word : strs) {
            message += word;
            message += code;
            cout << message << endl;
        } 

        return message;
    }

    vector<string> decode(string s) {
        
        int n = 0;
        bool trueCode = true;
        vector<string> ans;
        for (int i = 0; i < s.size(); ++i) {
            
            if (s[i] == code[0]) {
                cout << "i = " << i << endl;
                for (int j = 0; j < code.size(); ++j) {
                    cout << s[j+i] << " " << code[j] << endl;
                    if (s[j+i] != code[j]) {
                        trueCode = false;
                        cout << "false" << endl;
                    }
                }

                cout << "true code:" << trueCode << endl;

                if (trueCode) {
                    cout << s.substr(n, (i - n)) << " i, n = " << i << ", " << n << endl;
                    ans.push_back(s.substr(n, (i - n)));
                    n = i + code.size();
                }

                trueCode = true;
            }
        }
        return ans;
    }
};
