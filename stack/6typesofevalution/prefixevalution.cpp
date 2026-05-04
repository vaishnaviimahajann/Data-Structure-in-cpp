#include<iostream>
#include<stack>
#include<cctype>
#include<cmath>
using namespace std;

int evaluatePrefix(string prefix) {
    stack<int> st;

    // Traverse from right to left
    for (int i = prefix.length() - 1; i >= 0; i--) {
        char ch = prefix[i];

        // Operand
        if (isdigit(ch)) {
            st.push(ch - '0');
        }

        // Operator
        else {
            int val1 = st.top();
            st.pop();

            int val2 = st.top();
            st.pop();

            switch (ch) {
                case '+':
                    st.push(val1 + val2);
                    break;

                case '-':
                    st.push(val1 - val2);
                    break;

                case '*':
                    st.push(val1 * val2);
                    break;

                case '/':
                    st.push(val1 / val2);
                    break;

                case '^':
                    st.push(pow(val1, val2));
                    break;
            }
        }
    }

    return st.top();
}

int main() {

    string prefix;
    cout << "Enter prefix expression: ";
    cin >> prefix;

    cout << "\nStep 1 - Original Prefix Expression: " << prefix << endl;

    int result = evaluatePrefix(prefix);

    cout << "Step 2 - Final Evaluated Result: " << result << endl;

    return 0;
}

//git commit -m "Prefix evaluation always starts from right to left because operator comes before operands."