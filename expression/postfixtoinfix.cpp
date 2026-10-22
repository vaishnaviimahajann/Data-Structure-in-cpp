
#include <iostream>
#include <stack>
#include <string>
using namespace std;

string postfixtoinfix(string s) {
    stack<string> st;

    for (int i = 0; i < s.length(); i++) {
        if (isalnum(s[i])) {
            string temp(1, s[i]);
            st.push(temp);
        } else {
            string b = st.top();
            st.pop();

            string a = st.top();
            st.pop();

            string exp = "(" + a + s[i] + b + ")";
            st.push(exp);
        }
    }

    return st.top();
}

int main() {
    string s = "ab+c*";
    cout << postfixtoinfix(s);
    return 0;
}
