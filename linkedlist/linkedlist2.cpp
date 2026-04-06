//here we will delete node from front end and back end and also from middle

#include<iostream>
using namespace std;

class node {
public:
    int data;
    node *next;

    node(int val){
        data = val;
        next = NULL;
    }
     
    
};

class list {
    node *head;
    node *tail;

public:
    list(){
        head = NULL;
        tail = NULL;
    }
   
         void push_front(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    void push_back(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void insert_middle(int val,int pos){
        node *newnode=new node(val);
        
        node* temp=head;
        for(int i=1;i<pos-1;i++){
            if(temp == NULL){
                cout<<"position is invalid"<<endl;
                return;
            }
            temp=temp->next;
        }

        //temp is now at pos-1 i.e the node after which we want to insert the new node
        newnode->next=temp->next;
        temp->next=newnode;
    }

       void pop_front(int val){
        if(head == NULL){
            cout<<"List is empty. Cannot pop from front."<<endl;
            return;
        }
        node* temp = head;
        head = head->next;
        temp->next = NULL; // Detach the node
        delete temp; // Free memory
    }

    void pop_back(int val){
        node* temp=head;
        if(head == NULL){
            cout<<"List is empty. Cannot pop from back."<<endl;
            return;
        }
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
         delete tail;
            tail=temp;
    }

    void pop_middle(int pos){
        if(head == NULL){
            cout<<"List is empty. Cannot pop from middle."<<endl;
            return;
        }
        node* temp=head;
        for(int i=1;i<pos-1;i++){
            if(temp == NULL || temp->next == NULL){
                cout<<"position is invalid"<<endl;
                return;
            }
            temp=temp->next;
        }

        //temp is now at pos-1 i.e the node before the one we want to delete
        node* toDelete = temp->next;
        if(toDelete == NULL){
            cout<<"position is invalid"<<endl;
            return;
        }
        temp->next = toDelete->next; // Bypass the node to be deleted
        toDelete->next = NULL; // Detach the node
        delete toDelete; // Free memory
    }

    void printList(){
        node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.printList();

    ll.pop_front(1);
    ll.pop_back(5);
    ll.printList();

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.printList();

    ll.pop_middle(3);
    ll.printList();

    return 0;
}

