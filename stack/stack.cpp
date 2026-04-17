#include<iostream>
using namespace std;

class Stack{
    int arr[5];
    int top;

public:
    Stack(){
        top = -1;
    }

    // 🔥 PUSH
    void push(int val){
        if(top == 4){
            cout<<"Stack Overflow\n";
            return;
        }

        top++;
        arr[top] = val;
    }

    // 🔥 POP
    void pop(){
        if(top == -1){
            cout<<"Stack Underflow\n";
            return;
        }

        cout<<"Deleted: "<<arr[top]<<endl;
        top--;
    }

    // 🔥 PEEK
    void peek(){
        if(top == -1){
            cout<<"Stack empty\n";
            return;
        }

        cout<<"Top element: "<<arr[top]<<endl;
    }

    // 🔥 PRINT
    void print(){
        if(top == -1){
            cout<<"Stack empty\n";
            return;
        }

        cout<<"Stack: ";
        for(int i = top; i >= 0; i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.print();   // 30 20 10

    s.peek();    // 30

    s.pop();     // delete 30

    s.print();   // 20 10

    s.push(40);
    s.push(50);
    s.push(60);  // overflow

    s.print();

    return 0;
}