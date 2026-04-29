#include<iostream>
#include<cctype>
#include<stack>
using namespace std;

int main() {

    string postfix;
    cout << "Enter Postfix Expression : ";
    cin >> postfix;

    stack<string> st;

    // Traverse postfix expression
    for (int i = 0; i < postfix.length(); i++) {

        char ch = postfix[i];

        // Operand
        if (isalnum(ch)) {

            string op = "";
            op += ch;

            st.push(op);
        }

        // Operator
        else {

            // Right operand
            string op2 = st.top();
            st.pop();

            // Left operand
            string op1 = st.top();
            st.pop();

            // Create prefix
            string temp = ch + op1 + op2;

            // Push result
            st.push(temp);
        }
    }

    cout << "Prefix expression is : " << st.top() << endl;

    return 0;
}