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

    // 🔥 INSERT AT END (for testing)
    void push_back(int val){
        node* newnode = new node(val);

        if(head == NULL){
            head = newnode;
            newnode->next = head;
            return;
        }

        node* temp = head;

        while(temp->next != head){
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->next = head;
    }

    // 🔥 POP FRONT
    void pop_front(){
        if(head == NULL){
            cout<<"List empty\n";
            return;
        }

        // single node
        if(head->next == head){
            delete head;
            head = NULL;
            return;
        }

        node* temp = head;

        // find last node
        node* last = head;
        while(last->next != head){
            last = last->next;
        }

        head = head->next;
        last->next = head;

        delete temp;
    }

    // 🔥 POP BACK
    void pop_back(){
        if(head == NULL){
            cout<<"List empty\n";
            return;
        }

        // single node
        if(head->next == head){
            delete head;
            head = NULL;
            return;
        }

        node* temp = head;

        // go to second last
        while(temp->next->next != head){
            temp = temp->next;
        }

        node* last = temp->next;
        temp->next = head;

        delete last;
    }

    // 🔥 DELETE AT POSITION
    void delete_pos(int pos){
        if(head == NULL){
            cout<<"List empty\n";
            return;
        }

        // single node
        if(head->next == head){
            delete head;
            head = NULL;
            return;
        }

        // pos = 1
        if(pos == 1){
            node* last = head;
            while(last->next != head){
                last = last->next;
            }

            node* temp = head;
            head = head->next;
            last->next = head;

            delete temp;
            return;
        }

        node* temp = head;

        // go to pos-1
        for(int i = 1; i < pos-1; i++){
            temp = temp->next;

            if(temp->next == head){
                cout<<"Invalid position\n";
                return;
            }
        }

        node* del = temp->next;

        // deleting last node
        if(del->next == head){
            temp->next = head;
            delete del;
            return;
        }

        // middle delete
        temp->next = del->next;

        delete del;
    }

    // 🔥 PRINT
    void print(){
        if(head == NULL){
            cout<<"List empty\n";
            return;
        }

        node* temp = head;

        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp != head);

        cout<<endl;
    }
};

int main(){
    list ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    ll.print();  // 1 2 3 4 5

    ll.pop_front();
    ll.print();  // 2 3 4 5

    ll.pop_back();
    ll.print();  // 2 3 4

    ll.delete_pos(2);
    ll.print();  // 2 4

    return 0;
}