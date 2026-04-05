#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

class list{
    node *head;
    node *tail;
    public:
    list(){
        head=NULL;
        tail=NULL;
    }

    void push_front(int val){
        node *newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
   }

   void printList(){
        node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

     void printList2(){
        node* temp = tail;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }

      
};



int main(){


        list ll;
        ll.push_front(1);
        ll.push_front(2);
        ll.push_front(3);
       
        ll.printList();
        ll.printList2();
    return 0;
}