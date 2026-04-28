#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

// function to define precedence
int precedence(char ch) {
    if (ch == '^') return 3;
    else if (ch == '*' || ch == '/') return 2;
    else if (ch == '+' || ch == '-') return 1;
    else return 0;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

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
            st.pop(); // remove '('
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

    // pop remaining operators
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    cout << "Postfix: " << postfix << endl;

    return 0;
}