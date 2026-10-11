#include<iostream>
using namespace std;
#include <queue>
int main(){
    queue<int>q;
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

     cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}