#include<iostream>
#include<stack>
#include<cctype>
using namespace std;

string prefixToInfix(string prefix) {
    stack<string> st;

    // Traverse from right to left
    for (int i = prefix.length() - 1; i >= 0; i--) {
        char ch = prefix[i];

        // Operand
        if (isalnum(ch)) {
            string op(1, ch);
            st.push(op);
        }

        // Operator
        else {
            string op1 = st.top();
            st.pop();

            string op2 = st.top();
            st.pop();

            string expr = "(" + op1 + ch + op2 + ")";
            st.push(expr);
        }
    }

    return st.top();
}

int main() {

    string prefix;
    cout << "Enter prefix expression: ";
    cin >> prefix;

    // STEP 1: Original Prefix
    cout << "\nStep 1 - Original Prefix Expression: " << prefix << endl;

    // STEP 2: Convert Prefix to Infix
    string infix = prefixToInfix(prefix);

    cout << "Step 2 - Infix Expression: " << infix << endl;

    return 0;
}