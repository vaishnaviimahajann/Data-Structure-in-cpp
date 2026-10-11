#include<iostream>
#include<stack>
#include<vector>
using namespace std;
template<class T>
class stackuisngstl{
    stack<T> s;
public:
    void push(T element){
        s.push(element);
    }
    void pop(){
        s.pop();
    }
    T top(){
        return s.top();
    }
    bool isEmpty(){
        return s.empty();
    }

};
int main(){
    stackuisngstl<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.isEmpty()){
        cout<<"Top element is: "<<s.top()<<endl;
        s.pop();
    }
    if(s.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0 ;
}
