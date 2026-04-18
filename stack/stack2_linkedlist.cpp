#include<iostream>
using namespace std;

// Node class
template<class t>
class node{
public:
    t data;
    node* next;

    node(t val){
        data = val;
        next = NULL;
    }
};

// Stack class
template<class t>
class stack{
    node<t>* head;

public:
    // ✅ constructor
    stack(){
        head = NULL;
    }

    void push(t val){
        node<t>* newnode = new node<t>(val);
        newnode->next = head;
        head = newnode;
    }

    void pop(){
        if(head == NULL){
            cout<<"Stack Underflow\n";
            return;
        }
        node<t>* temp = head;
        head = head->next;
        delete temp;
    }

    t top(){
        if(head == NULL){
            cout<<"Stack Empty\n";
            return t();
        }
        return head->data;
    }

    bool isempty(){
        return head == NULL;
    }
};

int main(){
    stack<int> s;

    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isempty()){
        cout << s.top() << " ";
        s.pop();   // output: 1 2 3 4
    }

    cout << endl;
    return 0;
}