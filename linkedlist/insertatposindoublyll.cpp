#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node* next;
    node*prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};
class list{
    node* head;
    node*tail;

    public:
    list(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        node* newnode = new node(val);
        if(head== NULL){
            head = tail = newnode;
        }
        else{
            newnode -> next = head;
            head->prev = newnode;
            head = newnode;
        }
    }

    void insertatpos(int val , int pos){
        node* newnode = new node(val);
        node* temp = head;
        for(int i = 0 ; i < pos-2; i++){
            if(temp == NULL){
                cout<<"invalid pos";
                return;
            }
            temp = temp->next;
        }
        newnode->next = temp->next;
        newnode->prev = temp;

        if(temp->next != NULL){
            temp->next->prev = newnode;
        }
        temp->next = newnode;
    }

    void show(){
        node* temp = head;
        while(temp!= NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};
int main(){
    list l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.show();
    l.insertatpos(6,2);
    l.show();
    return 0;
}