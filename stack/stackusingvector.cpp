#include<iostream>
#include<vector>
using namespace std;
vector<int> stack;

int main(){
    int n ;
    cout<<"Enter the size of the stack: ";
    cin>>n;
    int element;
    for(int i = 0; i < n; i++){
        cout<<"Enter the element to push into the stack: ";
        cin>>element;
        stack.push_back(element);
    }
    cout<<"Stack elements: ";
    for(int i = 0; i < stack.size(); i++){
        cout<<stack[i]<<" ";
    }
    stack.pop_back();
    cout<<"\nStack elements after popping: ";
    for(int i = 0; i < stack.size(); i++){
        cout<<stack[i]<<" ";
    }
    return 0;
}
