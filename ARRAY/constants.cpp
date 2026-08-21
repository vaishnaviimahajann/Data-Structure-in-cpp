#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "abc23u";

    int count = 0;

    for (char ch : s) {

        if ((ch >= 'a' && ch <= 'z') &&
            !(ch == 'a' || ch == 'e' || ch == 'i' ||
              ch == 'o' || ch == 'u')) {

            count++;
        }
    }

    cout << "Number of consonants: " << count << endl;

    return 0;
}