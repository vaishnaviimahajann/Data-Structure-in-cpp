#include<iostream>
#include<vector>
#include<list>
using namespace std;

//stack using linkedlist
template<class t>
class stack{
    list<t> ll;

    public:
     void push(t val){
        ll.push_front(val);
     }

     void pop(){
        ll.pop_front();
     }

     t top(){
        return ll.front();
     }

     bool isempty(){
        return ll.size()==0;
     }
} ;

int main(){
    stack<int> s;

    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isempty()){   // ✅ object ke through call
        cout<<s.top()<<" ";
        s.pop(); // 1 2 3 4
    }
    cout<<endl;
    

    return 0;
}