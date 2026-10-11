#include<iostream>
using namespace std;
template<class T>
class node{
    public :
       T data;
       node<T>* next;
       node(T val){
        data = val;
        next = NULL;
       }       
};
template<class T>
class list {
    public:
        node<T>* head;
        node<T>* tail;
        list(){
            head = NULL;
            tail = NULL;
        }
        void push_front(T val){
            node<T>* newnode = new node<T>(val);
            if(head == NULL){
                head = tail = newnode;
            }
            else{
                newnode->next = head;
                head = newnode;
            }
        }
        void pop_front(){
            if(head == NULL){
                cout<<"list is empty"<<endl;
                return;
            }
            node<T>* temp = head;
            head = head->next;

            temp->next = NULL;
            delete temp;

        }
        void showll(){
            node<T>* temp = head;
            while(temp != NULL){
                cout<< temp->data<<" ";
                temp = temp->next;
            }
        }
        bool isEmpty() {
         return head == NULL;
}
};
int main(){
    list<int> l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.showll();
    l.pop_front();
    cout<<endl;
    l.showll();

     cout<<endl;
    list<float> l2;
    l2.push_front(10.5);
    l2.push_front(20.5);
    l2.push_front(30.5);
    l2.showll();
    return 0;
}

