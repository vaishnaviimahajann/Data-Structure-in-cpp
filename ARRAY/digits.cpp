#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "abc23u";

    int count = 0;

    for (char ch : s) {

        if (ch >= '0' && ch <= '9') {
            count++;
        }
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}