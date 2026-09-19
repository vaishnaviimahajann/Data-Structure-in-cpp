#include <iostream>
#include<vector>
using namespace std;

int main() {

    pair<int, string> p = {1, "rahul"};

    cout << p.first << endl;
    cout << p.second << endl;
    
    p.first = 2;
    p.second = "kumar";
    cout << p.first << endl;
    cout << p.second << endl;


    vector<int> v = {10, 20, 30};

cout << v.empty() << endl;

v.clear();

cout << v.empty() << endl;
    return 0;
}