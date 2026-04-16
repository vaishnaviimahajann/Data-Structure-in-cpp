#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class list{
    node* head;

public:
    list(){
        head = NULL;
    }

    // 🔥 INSERT AT BEGINNING (push_front)
    void push_front(int val){
        node* newnode = new node(val);

        // empty list
        if(head == NULL){
            head = newnode;
            newnode->next = head;
            return;
        }

        node* temp = head;

        // find last node
        while(temp->next != head){
            temp = temp->next;
        }

        newnode->next = head;
        temp->next = newnode;
        head = newnode;
    }

    // 🔥 INSERT AT END (push_back)
    void push_back(int val){
        node* newnode = new node(val);

        // empty list
        if(head == NULL){
            head = newnode;
            newnode->next = head;
            return;
        }

        node* temp = head;

        // find last node
        while(temp->next != head){
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->next = head;
    }

    // 🔥 INSERT AT POSITION
    void insert_pos(int val, int pos){
        node* newnode = new node(val);

        // empty list
        if(head == NULL){
            head = newnode;
            newnode->next = head;
            return;
        }

        // position = 1
        if(pos == 1){
            node* temp = head;

            while(temp->next != head){
                temp = temp->next;
            }

            newnode->next = head;
            temp->next = newnode;
            head = newnode;
            return;
        }

        node* temp = head;

        // go to pos-1
        for(int i = 1; i < pos-1; i++){
            temp = temp->next;

            if(temp->next == head){
                cout << "Invalid position\n";
                return;
            }
        }

        newnode->next = temp->next;
        temp->next = newnode;
    }

    // 🔥 PRINT
    void print(){
        if(head == NULL){
            cout << "List empty\n";
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

    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);

    ll.print();  // 1 2 3 4

    ll.insert_pos(10, 3);

    ll.print();  // 1 2 10 3 4

    return 0;
}