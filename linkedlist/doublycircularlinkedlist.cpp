#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
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

    void push_front(int val){
        node* newnode = new node(val);

        if(head == NULL){
            head = tail = newnode;
            head->next = head;
            head->prev = head;
        }else{
            newnode->next = head;
            newnode->prev = tail;

            head->prev = newnode;
            tail->next = newnode;

            head = newnode;
        }
    }

    void push_back(int val){
        node* newnode = new node(val);
        if(head==NULL){
            return;
        }
        else{
            newnode->next=head;
            newnode->prev=tail;

            tail->next=newnode;
            head->prev=newnode;

            tail=newnode;
        }
    }
  void insert_pos(int val,int pos){
    node * newnode= new node(val);

    //empty list
    if(head==NULL){
        head=tail=newnode;
        head->next=head;
        head->prev=head;

        return;
    }

    //if pos =1
    if(pos==1){
    newnode->next=head;
    newnode->prev=tail;

    head->prev=newnode;
    tail->next=newnode;

    head=newnode;
    return;
    }

    node* temp=head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
        if(temp==head){
            cout<<"invalid pos";
            return;
        }
    }


    //normal middle insert
 newnode->next=temp->next;
 newnode->prev=temp;

 temp->next->prev=newnode;
 temp->next=newnode;

 //ifinserted at end
 if(temp==tail){
    tail=newnode;
 }

  }
    void print(){
        if(head == NULL){
            return;
        }

        node* temp = head;

        do{
            cout << temp->data << " ";
            temp = temp->next;
        }while(temp != head);

        cout << endl;
    }
};

int main(){
    list ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.print();  // 3 2 1

    ll.push_back(6);
    ll.print();

    ll.insert_pos(10,3);
    ll.print();

    return 0;
}