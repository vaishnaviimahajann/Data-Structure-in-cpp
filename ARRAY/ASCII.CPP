#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "aabbccd";

    // ASCII value of characters
    cout << "ASCII values:" << endl;

    for (char ch : s) {
        cout << ch << " = " << int(ch) << endl;
    }

    // Frequency of lowercase characters
    int freq[26] = {0};

    for (char ch : s) {
        freq[ch - 'a']++;
    }

    cout << "\nCharacter frequencies:" << endl;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char('a' + i) << " = " << freq[i] << endl;
        }
    }

    // Character conversion
    char ch = 'A';

    cout << "\nUppercase: " << ch << endl;
    cout << "Lowercase: " << char(ch + 32) << endl;

    return 0;
}