#include<iostream>
using namespace std;

class node{
    public : char data;
    node* left;
    node* right;

    node(char val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
//creating a binary tree first
node* insert(node* root , char val){
    if(root == nullptr){
        return new node(val);
    }
        if(val < root->data){
            root->left= insert(root->left , val);
        }
        else{
            root->right = insert(root->right , val);
        }

    return root;
}

//inorder traversal
void inorder(node* root){
    if(root == nullptr) return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    node* root = nullptr;
    root = insert(root , 'f');
    root = insert(root , 'd');
    root = insert(root , 'h');
    root = insert(root , 'b');
    root = insert(root , 'e');
    root = insert(root , 'g');
    root = insert(root , 'i');
    root = insert(root , 'a');
    


    cout<<"Inorder Traversal : ";
    inorder(root);
    return 0;
}