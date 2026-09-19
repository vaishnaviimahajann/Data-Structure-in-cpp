#include<iostream>
using namespace std;
class node{
    public :
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
 
    void push_back(int val){
        node* newnode = new node(val);
        if(head== NULL){
            head = tail = newnode;
        }else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    void insertatpos(int val , int pos){
        node* newnode = new node(val);
        node*temp = head;
        for(int i = 0 ; i < pos-1;i++){
            if(temp == NULL){
                cout<<"Invalid position"<<endl;
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
    void showll(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

};
int main(){
    
    list l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);


    l.showll();
    cout<<endl;
    l.push_back(40);
    l.push_back(50);
    l.showll();
}
