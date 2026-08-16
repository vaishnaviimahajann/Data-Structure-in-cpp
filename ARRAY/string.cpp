#include <iostream>
#include <string>
using namespace std;

int main() {

    // 1. String declaration
    string s = "Hello World";

    // 2. String indexing
    cout << "First character: " << s[0] << endl;

    // 3. String length
    cout << "Length: " << s.length() << endl;

    // 4. Traversal using normal for loop
    cout << "Characters using index loop: ";
    for (int i = 0; i < s.length(); i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    // 5. Traversal using range-based loop
    cout << "Characters using range-based loop: ";
    for (char ch : s) {
        cout << ch << " ";
    }
    cout << endl;

    // 6. Modify a character
    s[0] = 'h';
    cout << "After modification: " << s << endl;

    // 7. ASCII values
    cout << "ASCII values: ";
    for (char ch : s) {
        cout << int(ch) << " ";
    }
    cout << endl;

    // 8. Concatenation
    string a = "Data";
    string b = "Base";

    string c = a + " " + b;
    cout << "Concatenated string: " << c << endl;

    // 9. Empty string
    string empty = "";

    if (empty.empty()) {
        cout << "The string is empty." << endl;
    }

    // 10. Add character using push_back()
    c.push_back('!');
    cout << "After push_back: " << c << endl;

    // 11. Remove last character using pop_back()
    c.pop_back();
    cout << "After pop_back: " << c << endl;

    return 0;
}