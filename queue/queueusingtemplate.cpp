#include<iostream>
using namespace std;
template< class t>
class node{
    public:
      t data;
       node* next;

       node(t val){
        data = val;
        next = NULL;
       }
};
template< class t>
class list{
    node<t>* head;
    node<t>* tail;

    public:
    list(){
            head = NULL;
            tail = NULL;
        }
        void push_back(t val){
            node<t>* newnode = new node<t>(val);
            if(head == NULL){
                head = newnode;
                tail = newnode;
            }
            else{
                tail->next = newnode;
                tail = newnode;
            }
        }
        void pop_front(){
            if(head == NULL){
                cout<<"List is empty"<<endl;
                return;
            }
            node<t>* temp = head;
            head = head->next;
            delete temp;
        }
        t front(){
            if(head == NULL){
                cout<<"List is empty"<<endl;
                return -1;
            }
            return head->data;
        }
        bool empty(){
            return head == NULL;
        }

        void show(){
            node<t>* temp = head;
            while(temp!= NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }

};
int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    cout<<"Front element: "<<l.front()<<endl;
    l.pop_front();
    cout<<"Front element after pop: "<<l.front()<<endl;
    l.show();

    cout<<endl;

     list<float> l2;
    l2.push_back(89.76);
    l2.push_back(6.3);
    l2.push_back(98.78);

    cout<<"Front element: "<<l2.front()<<endl;
    l2.pop_front();
    cout<<"Front element after pop: "<<l2.front()<<endl;
    l2.show();
    
    return 0;
}