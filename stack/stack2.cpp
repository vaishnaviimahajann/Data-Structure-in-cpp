#include<iostream>
#include<vector>
using namespace std;

class stack{
    vector<int> vec;

public:
    void push(int val){
        vec.push_back(val);
    }

    void pop(){
        if(isempty()){
            cout<<"Stack is empty\n";
            return;
        }
        vec.pop_back();
    }

    int top(){
        if(isempty()){
            cout<<"Stack is empty\n";
            return -1;
        }
        return vec.back();   // last element
    }

    bool isempty(){
        return vec.size() == 0;
    }
};

int main(){
    stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isempty()){   // ✅ object ke through call
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}