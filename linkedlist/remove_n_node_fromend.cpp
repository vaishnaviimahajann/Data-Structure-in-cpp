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

   void removenthfromend(int n){
    node* prev=head;

   
    for(int i=0;i<n;i++){
       prev=prev->next;
    }
    node* todel =prev->next;
    cout<<"going to delete"<<todel->data<<endl;
    prev->next=todel->next;

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
    l.push_front(5);
    l.push_front(6);
    l.push_front(7);
    l.display();
    l.removenthfromend(3);
    l.display();
}