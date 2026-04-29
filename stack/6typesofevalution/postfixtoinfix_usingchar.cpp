#include<iostream>
#include<stack>
#include<cctype>
using namespace std;

int main() {

    string postfix;
    cout << "Enter postfix expression: ";
    cin >> postfix;

    stack<char> st;

    for (int i = 0; i < postfix.length(); i++) {

        char ch = postfix[i];

        // Operand
        if (isalnum(ch)) {
            st.push(ch);
        }

        // Operator
        else {

            char op2 = st.top();
            st.pop();

            char op1 = st.top();
            st.pop();

            // Print current expression
            cout << "(" << op1 << ch << op2 << ")";

            // ❌ Wrong:
            // only operator pushed back,
            // full expression lost
            st.push(ch);
        }
    }

    return 0;
}