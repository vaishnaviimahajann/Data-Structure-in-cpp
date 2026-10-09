#include<iostream>
using namespace std;
#include<vector>
template< class t>
class stack{
public:
    vector<t> s;
    void push( t element){
        s.push_back(element);
    }
    void pop(){
        s.pop_back();
    }
    int isEmpty(){
        if(s.size() == 0){
            cout<<"Stack is empty"<<endl;
            return 1;
        }
        else{
            cout<<"Stack is not empty"<<endl;
            return 0;
        }
    }
    t top(){
        return s.back();
    }
};
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.isEmpty()){
        cout<<"Top element is: "<<s.top()<<endl;
        s.pop();
    }
    s.isEmpty();
    return 0 ;
}