#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string expr) {
    stack<char> st;

    for (int i = 0; i < expr.length(); i++) {
        char ch = expr[i];

        // Opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }

        // Closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {

            // If stack empty
            if (st.empty()) {
                return false;
            }

            char top = st.top();

            // Matching condition
            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')) {
                st.pop();
            }
            else {
                return false;
            }
        }
    }

    // Final check
    return st.empty();
}

int main() {

    string expr;
    cout << "Enter expression: ";
    cin >> expr;

    cout << "\nStep 1 - Original Expression: " << expr << endl;

    if (isBalanced(expr)) {
        cout << "Step 2 - Balanced Parenthesis ✔️" << endl;
    }
    else {
        cout << "Step 2 - Not Balanced ❌" << endl;
    }

    return 0;
}