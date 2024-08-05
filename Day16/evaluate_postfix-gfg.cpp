class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> st;
 
    // Scan all characters one by one
    for (int i = 0; i < S.size(); ++i) {
         
        // If the scanned character is an operand 
        // (number here), push it to the stack.
        if (isdigit(S[i]))
            st.push(S[i] - '0');
 
        // If the scanned character is an operator, 
        // pop two elements from stack apply the operator
        else {
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            switch (S[i]) {
            case '+':
                st.push(val2 + val1);
                break;
            case '-':
                st.push(val2 - val1);
                break;
            case '*':
                st.push(val2 * val1);
                break;
            case '/':
                st.push(val2 / val1);
                break;
            }
        }
    }
    return st.top();
    }
};