#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;

    }
};
class list{
public:
    node*head;
    node*tail;

    list(){
        head=NULL;
        tail=NULL;
    }

void push_front(int val){
    node* newnode = new node(val);
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
void pop_back(){
    if(head==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    node* temp = head;
    while(temp->next->next !=NULL){
        temp = temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail = temp;
   

}
int iterative_search(int key){
    node* temp = head;
    int idx = 0;
    while(temp!=NULL){
        if(temp->data==key){
            cout<<"key is present"<<endl;
            return idx;
        }
        temp = temp->next;
        idx++;
    }
    cout<<"key is not present"<<endl;
    return -1;
}
void showll(){
    node* temp = head;
    while(temp!=NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
}
};
int main(){
    list l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.showll();
    l.pop_back();
    l.showll();
    l.iterative_search(60);
    return 0;
}