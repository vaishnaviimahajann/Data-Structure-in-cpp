#include<iostream>
#include<stack>
#include<cctype>
#include<cmath>
using namespace std;

int precedence(char ch) {
    if (ch == '^') return 3;
    else if (ch == '*' || ch == '/') return 2;
    else if (ch == '+' || ch == '-') return 1;
    else return 0;
}

int applyOperation(int val2, int val1, char op) {
    switch(op) {
        case '+': return val2 + val1;
        case '-': return val2 - val1;
        case '*': return val2 * val1;
        case '/': return val2 / val1;
        case '^': return pow(val2, val1);
    }
    return 0;
}

int evaluateInfix(string infix) {
    stack<int> values;
    stack<char> ops;

    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        // Operand
        if (isdigit(ch)) {
            values.push(ch - '0');
        }

        // Opening bracket
        else if (ch == '(') {
            ops.push(ch);
        }

        // Closing bracket
        else if (ch == ')') {
            while (!ops.empty() && ops.top() != '(') {
                int val1 = values.top(); values.pop();
                int val2 = values.top(); values.pop();
                char op = ops.top(); ops.pop();

                values.push(applyOperation(val2, val1, op));
            }
            ops.pop();
        }

        // Operator
        else {
            while (!ops.empty() && precedence(ops.top()) >= precedence(ch)) {
                int val1 = values.top(); values.pop();
                int val2 = values.top(); values.pop();
                char op = ops.top(); ops.pop();

                values.push(applyOperation(val2, val1, op));
            }
            ops.push(ch);
        }
    }

    while (!ops.empty()) {
        int val1 = values.top(); values.pop();
        int val2 = values.top(); values.pop();
        char op = ops.top(); ops.pop();

        values.push(applyOperation(val2, val1, op));
    }

    return values.top();
}

int main() {

    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    cout << "\nStep 1 - Original Infix Expression: " << infix << endl;

    int result = evaluateInfix(infix);

    cout << "Step 2 - Final Evaluated Result: " << result << endl;

    return 0;
}

//git commit -m "Infix evaluation requires handling operator precedence and parentheses, so we use two stacks: one for values and one for operators."