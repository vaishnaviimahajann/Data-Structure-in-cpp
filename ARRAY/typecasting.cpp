#include <iostream>
using namespace std;

int main() {
    int a=10;
    double b=a;
    cout<<b;
    

     // 2. char -> int (ASCII)
    char ch = 'A';
    int ascii = ch;
    cout << "2. char to int: " << ascii << endl;

    // 3. float -> double
    float f = 3.5f;
    double d = f;
    cout << "3. float to double: " << d << endl;

    // 4. short -> int
    short s = 100;
    int si = s;
    cout << "4. short to int: " << si << endl;

    // 5. int -> long
    int i = 5000;
    long li = i;
    cout << "5. int to long: " << li << endl;

    // 6. float + int
    int num1 = 5;
    float num2 = 2.5;
    float result1 = num1 + num2; // int promoted to float
    cout << "6. int + float: " << result1 << endl;

    // 7. double + float
    double d1 = 5.5;
    float f1 = 2.2f;
    double result2 = d1 + f1; // float promoted to double
    cout << "7. double + float: " << result2 << endl;

    // 8. char + int
    char c1 = 'C';
    int sum = c1 + 2; // char to int automatically
    cout << "8. char + int: " << sum << endl;

    // 9. bool -> int
    bool flag = true;
    int bint = flag;
    cout << "9. bool to int: " << bint << endl;

    // 10. unsigned int -> long
    unsigned int ui = 1000;
    long l1 = ui;
    cout << "10. unsigned int to long: " << l1 << endl;

     cout << "\n----- Explicit Type Casting Examples -----" << endl;

    // 1. double -> int
    double x = 5.8;
    int y = (int)x;
    cout << "1. double to int: " << y << endl;

   

    return 0;
}