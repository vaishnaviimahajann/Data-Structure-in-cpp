#include<iostream>
using namespace std;
#include <list>
class QueueUsingLL {
        list<int> l;
        public:
        void push(int data){
            l.push_back(data);
        }
        void pop(){
            if(!l.empty()){
                l.pop_front();
            }
            else{
                cout<<"Queue is empty"<<endl;
            }
        }
        void front(){
            if(!l.empty()){
                cout<<"Front element: "<<l.front()<<endl;
            }
            else{
                cout<<"Queue is empty"<<endl;
            }
        }
        int empty(){
            if(l.empty()){
                cout<<"Queue is empty"<<endl;
                return 1;
            }
            else{
                cout<<"Queue is not empty"<<endl;
                return 0;
            }
        }
} ;
int main(){
    QueueUsingLL q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.front();
    q.pop();
    q.front();
    
    while(!q.empty()){
        q.pop();
    }

    
    return 0;
}