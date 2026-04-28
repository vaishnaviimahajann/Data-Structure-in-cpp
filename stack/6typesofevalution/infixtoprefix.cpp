#include<iostream>
#include<stack>
#include<cctype>
using namespace std;

int precedence(char ch) {
    if (ch == '^') return 3;
    else if (ch == '*' || ch == '/') return 2;
    else if (ch == '+' || ch == '-') return 1;
    else return 0;
}

string infixToPostfix(string infix) {
    stack<char> st;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        // operand
        if (isalnum(ch)) {
            postfix += ch;
        }

        // opening bracket
        else if (ch == '(') {
            st.push(ch);
        }

        // closing bracket
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }

        // operator
        else {
            while (!st.empty() && precedence(st.top()) >= precedence(ch)) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {

    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    // STEP 1: Reverse + Swap
    string revInfix = "";

    for (int i = infix.length() - 1; i >= 0; i--) {
        if (infix[i] == '(')
            revInfix += ')';
        else if (infix[i] == ')')
            revInfix += '(';
        else
            revInfix += infix[i];
    }

    cout << "\nStep 1 - Reversed Expression: " << revInfix << endl;

    // STEP 2: Postfix
    string postfix = infixToPostfix(revInfix);

    cout << "Step 2 - Postfix of Reversed Expression: " << postfix << endl;

    // STEP 3: Reverse postfix → Prefix
    string prefix = "";

    for (int i = postfix.length() - 1; i >= 0; i--) {
        prefix += postfix[i];
    }

    cout << "Step 3 - Final Prefix Expression: " << prefix << endl;

    return 0;
}