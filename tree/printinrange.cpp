#include<iostream>
#include<vector>
using namespace std;

class Node{
    public :
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }

};
Node* insert(Node*root ,int val){
    if(root == nullptr){
       root= new Node(val);
         return root;
    }
        if(val < root->data){
            root->left= insert(root->left , val);
        }
        else{
            root->right = insert(root->right , val);
        }

    return root;
}

Node* buildbst(int arr[],int n){
    Node* root =NULL;
    for(int i=0; i<n; i++){
        root = insert(root , arr[i]);
    }
    return root;
}

void printinrange(Node* root , int start , int end){
    if(root ==  NULL){
        return;
    }
    if(start<=root->data &&  root->data <=end){
        //case 1
        cout<<root->data<<" ";
        printinrange(root->left,start,end);
        printinrange(root->right,start,end);

    }else if(root->data <start){
        //case 2
        printinrange(root->right , start ,end);

    }else{
        //case 3
          printinrange(root->left , start ,end);

    }
}

void inorder(Node* root){
    if(root == nullptr) return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){

    int arr[9]={8,5,3,1,4,6,10,11,14};
   Node* root = buildbst(arr,9);
    
   printinrange(root,5,12);
   cout<<endl;

      return 0;
}
