#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;

    }
};
class list{
public:
    node*head;
    node*tail;

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
void pop_front(){
    if(head==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    node* temp = head;
    head= head->next;

    temp->next=NULL;
    delete temp;

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
    l.pop_front();
    l.showll();
    return 0;
}