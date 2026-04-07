#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    node *head;
    public:
    list(){
        head=NULL;
    }

    void push_front(int val){
        node *newnode=new node(val);
        newnode->next=head;
        head=newnode;
   }

   void reverse(){
    node* curr=head;
    node* prev=NULL;

    while(curr!=NULL){
        node* nextnode=curr->next; //store the next node
        curr->next=prev; //reverse the current node's pointer
        prev=curr; //move prev to current node
        curr=nextnode; //move curr to next node

    }
    head=prev;
   }
  
  void display(){
      node* temp=head;
      while(temp!=NULL){
          cout<<temp->data<<" ""-> ";
          temp=temp->next;
      }
      cout<<endl;
  }
};
int main(){
    list l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.display();

    l.reverse();
    l.display();
}