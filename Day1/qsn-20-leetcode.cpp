#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                stack.push(ch);
            } else {
                if (stack.empty()) {
                    return false; 
                }

                char top = stack.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {
                    stack.pop();
                } else {
                    return false; 
                }
            }
        }

        return stack.empty(); 
    }
};