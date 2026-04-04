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
     
    // Destructor to free memory
    ~node(){
        cout<<"Deleting node with value: " << data << endl;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Node with value " << data << " deleted." << endl;
        
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
    // Destructor to free memory
    ~list(){
        if(head!=NULL){
            cout<<"Deleting the entire list..."<<endl;
            delete head;
            head = NULL;
        }
        cout<<"List deleted."<<endl;
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

   // ll.printList(); // Output: 3 2 1 4 5
    ll.insert_middle(900, 3); // Insert 900 at position 3
    ll.printList(); // Output: 3 2 900 1 4 5

    return 0;
}