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

  void pop_front(){
    if(head==NULL){
        cout<<"list is empty";
        return;
    }
    if(head==tail){
        delete head;
        head=tail=NULL;
        return;

    }
    node* temp=head;
    head=head->next;
    head->prev=tail;
    tail->next=head;

    delete temp;
  }

  void pop_back(){
     if(head==NULL){
        cout<<"list is empty";
        return;
    }
    if(head==tail){
        delete head;
        head=tail=NULL;
        return;

    }
    node* temp=tail;
    tail=tail->prev;
    tail->next=head;
    head->prev=tail;


    delete temp;

  }

void pop_pos(int pos){
     if(head==NULL){
        cout<<"list is empty";
        return;
    }
    node*temp=head;
    if(head==tail){
        delete head;
        head=tail=NULL;
        return;

    }

    if(pos==1){
        head=head->next;
        head->prev=tail;
        tail->next=head;

        delete temp;
        return;
    }

    for(int i=0;i<pos;i++){
        temp=temp->next;
        if(temp==head){
            cout<<"invalid pos";
            return;
            
        }
    }

    if(temp==tail){
        tail=tail->prev;
    tail->next=head;
    head->prev=tail;


    delete temp;
    return;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;

    delete temp;


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

    ll.pop_front();
    ll.print();

    ll.pop_back();
    ll.print();


    ll.push_front(6);

    ll.push_front(6);
    ll.push_front(0);
     ll.print();
    ll.pop_pos(3);
    ll.print();


    return 0;
}