#include<iostream>
#include<stack>
#include<cctype>
using namespace std;

int main() {

    string postfix;
    cout << "Enter postfix expression: ";
    cin >> postfix;

    stack<string> st;

    // Traverse postfix expression
    for (int i = 0; i < postfix.length(); i++) {

        char ch = postfix[i];

        // If operand
        if (isalnum(ch)) {

            string op = "";
            op += ch;

            st.push(op);
        }

        // If operator
        else {

            // Right operand
            string op2 = st.top();
            st.pop();

            // Left operand
            string op1 = st.top();
            st.pop();

            // Create infix expression
            string temp = "(" + op1 + ch + op2 + ")";

            // Push result
            st.push(temp);
        }
    }

    // Print final infix
    cout << "Infix expression: " << st.top() << endl;

    return 0;
}