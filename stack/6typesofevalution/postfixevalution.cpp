#include<iostream>
#include<stack>
#include<cctype>
#include<cmath>
using namespace std;

int evaluatePostfix(string postfix) {
    stack<int> st;

    // Traverse from left to right
    for (int i = 0; i < postfix.length(); i++) {
        char ch = postfix[i];

        // Operand
        if (isdigit(ch)) {
            st.push(ch - '0');//Subtracting '0' converts digit characters into their numeric integer values
        }

        // Operator
        else {
            int val1 = st.top();
            st.pop();

            int val2 = st.top();
            st.pop();

            switch (ch) {
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

                case '^':
                    st.push(pow(val2, val1));
                    break;
            }
        }
    }

    return st.top();
}

int main() {

    string postfix;
    cout << "Enter postfix expression: ";
    cin >> postfix;

    cout << "\nStep 1 - Original Postfix Expression: " << postfix << endl;

    int result = evaluatePostfix(postfix);

    cout << "Step 2 - Final Evaluated Result: " << result << endl;

    return 0;
}

//git commit -m "Postfix evaluation always starts from left to right because operands come before operator."