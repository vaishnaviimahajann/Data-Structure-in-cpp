#include<iostream>
using namespace std;
#include<list>

int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    for(int x : l){
        cout << x << " ";
    }
    return 0;
}