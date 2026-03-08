#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    cout << s[0];      // H
    cout << s.length(); // 5

   string  str1="hieee , there!";
    string str2="hieee , there!";
    if(str1==str2){
        cout<<"same string";
    }
    else{
        cout<<"different string";
    }

    cout << s.substr(0, 3); // Hello
    cout << s.substr(2);    // llo
    cout<<"size of string: "<<str1.length()<<endl; // 5
    cout<<"size of string: "<<str1.size()<<endl; // 5

    //concatination
    string str3 = str1 + " " + str2;
    cout<<str3<<endl;
}
