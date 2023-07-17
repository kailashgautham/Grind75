//class Solution {
//public:
//    int evalRPN(vector<string>& tokens) {
//        stack<string> stack;
//        int x, y;
//        for(string token : tokens) {
//            if (token == string{"+"}) {
//                x = stoi(stack.top());
//                stack.pop();
//                y = stoi(stack.top());
//                stack.pop();
//                stack.push(to_string(x + y));
//            }
//            else if (token == string{"-"}) {
//                x = stoi(stack.top());
//                stack.pop();
//                y = stoi(stack.top());
//                stack.pop();
//                stack.push(to_string(y - x));
//            }
//            else if (token == string{"*"}) {
//                x = stoi(stack.top());
//                stack.pop();
//                y = stoi(stack.top());
//                stack.pop();
//                stack.push(to_string(x * y));
//            }
//            else if (token == string{"/"}) {
//                x = stoi(stack.top());
//                stack.pop();
//                y = stoi(stack.top());
//                stack.pop();
//                stack.push(to_string(y / x));
//            }
//            else stack.push(token);
//        }
//        return stoi(stack.top());
//    }
//};
//
//
