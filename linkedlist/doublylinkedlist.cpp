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

   void push_back(int val){
    node* newnode=new node(val);
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
     }
 }

  void insert_middle(int val,int pos){
    node *newnode=new node(val);
    node* temp=head;

    for(int i=1;i<pos-1;i++){
        if(temp==NULL){
            cout<<"position is invalid"<<endl;
            return;
        }
        temp=temp->next;
    }
    //temp is now at pos-1 i.e the node after which we want to insert the new node
    newnode->next=temp->next;
    newnode->prev=temp;

    if(temp->next!=NULL){
        temp->next->prev=newnode;
    }
    temp->next=newnode;
  }

  //itreative search on linkedlist
  int search(int key){
    node* temp=head;
    int index=0;
    while(temp!=NULL){
        if(temp->data==key){
            return index;
        }
        temp=temp->next;
        index++;
    }
    return -1; //key not found
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
        ll.insert_middle(10, 2);
        ll.printList();
        cout << "Index of 10: " << ll.search(3) << endl;
    return 0;
}