class Solution {
public:
    bool isValid(string s) {
        string stack = "";
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') stack += c;
            else if (stack.length() == 0 || (c == ')' && stack[stack.length() - 1] != '(') || (c == ']' && stack[stack.length() - 1] != '[') || (c == '}' && stack[stack.length() - 1] != '{')) {
                return false;
            } else stack.pop_back();
        }
        return (stack.length() == 0);
    }
};