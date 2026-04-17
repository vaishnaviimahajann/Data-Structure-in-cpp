#include<iostream>
#include<vector>
using namespace std;

template<class t>
class stack{
    vector<t> vec;

public:
    void push(t val){
        vec.push_back(val);
    }

    void pop(){
        if(isempty()){
            cout<<"Stack is empty\n";
            return;
        }
        vec.pop_back();
    }

    t top(){
        if(isempty()){
            cout<<"Stack is empty\n";
            return t();
        }
        return vec.back();   // last element
    }

    bool isempty(){
        return vec.size() == 0;
    }
};

int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isempty()){   // ✅ object ke through call
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
     stack<char> s2;

    s2.push('a');
    s2.push('b');
    s2.push('c');
    s2.push('d');

    while(!s2.isempty()){   // ✅ object ke through call
        cout<<s2.top()<<" ";
        s2.pop();
    }

    return 0;
}