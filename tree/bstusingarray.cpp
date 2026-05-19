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

void inorder(Node* root){
    if(root == nullptr) return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){

    int arr[6]={5,1,3,4,2,7};
    Node* root = buildbst(arr,6);
    cout<<"Inorder Traversal : ";
    inorder(root);

      return 0;
}
