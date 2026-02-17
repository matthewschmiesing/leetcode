class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) {
            return false;
        }

        stack<char> open;
        char close;

        for (int i = 0; i < s.size(); i++) {

            switch (s[i]) {
                case '(':
                case '{':
                case '[':
                    open.push(s[i]);
                    break;

                case ')':
                case '}':
                case ']':

                    if (open.empty()) {
                        return false;
                    }

                    close = s[i];

                    if ((close == ')' && open.top() != '(') ||
                        (close == '}' && open.top() != '{') ||
                        (close == ']' && open.top() != '[')) {
                        return false;
                    }

                    open.pop();
                    break;
            }
        }

        return open.empty();
    }
};