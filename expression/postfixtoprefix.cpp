
#include <iostream>
#include <stack>
#include <string>
using namespace std;

string postfixtoprefix(string s) {
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

           string exp = string(1, s[i]) + a + b;
            st.push(exp);
        }
    }

    return st.top();
}

int main() {
    string s = "ab+c*";
    cout << postfixtoprefix(s);
    return 0;
}
