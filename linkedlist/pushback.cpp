#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    public:
    node*head = NULL;
    node*tail = NULL;

    list(){
        head=NULL;
        tail=NULL;
    }

    void push_front(int val){
        node* newnode = new node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }

    void push_back(int val){
        if(head == NULL){
            node* newnode = new node(val);
            head= tail = newnode;
        }
        else{
            node*newnode = new node(val);
            tail->next = newnode;
            tail = newnode;
        }

    }

    void showll(){
        node* temp = head;
        while(temp!=NULL){
            cout<< temp->data<<" ";
            temp = temp->next;
        }
    }
};
int main(){
    list l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.showll();
    l.push_back(40);
    l.push_back(50);
    l.showll();
    return 0;
}