#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node* next;

    node(int val){
        data= val;
        next = NULL;
    }
};
class list{
    node* head;
    node* tail;

    public:
    list(){
            head = NULL;
            tail = NULL;
        }
        void push_back(int val){
            node* newnode = new node(val);
            if(head == NULL){
                head = newnode;
                tail = newnode;
            }
            else{
                tail->next = newnode;
                tail = newnode;
            }
        }
     
        void pop_front() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    node* temp = head;
    head = head->next;
    delete temp;

    if (head == NULL) {
        tail = NULL;
    }
}
        int front(){
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
            node*temp = head;
            while(temp!= NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        }
    };
    int main(){
        list l;
        l.push_back(1);
        l.push_back(2);
        l.push_back(3);
        l.show();
        cout<<endl;
        cout<<"Front element is: "<<l.front()<<endl;
        l.pop_front();
        l.show();
        cout<<endl;
        cout<<"Front element is: "<<l.front()<<endl;
        return 0;
    }
