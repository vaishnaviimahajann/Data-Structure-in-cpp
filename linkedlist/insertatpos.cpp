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
void insertatpos(int val , int pos){
    node* newnode = new node(val);
    node*temp= head;
    for(int i = 0 ; i <pos-1 ; i++){
        if(temp==NULL){
            cout<<"position is invalid"<<endl;
            return;
        }
       temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;

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
    l.insertatpos(25,2);
    l.showll();
    return 0;
}