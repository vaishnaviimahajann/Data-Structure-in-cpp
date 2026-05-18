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

bool search(Node*root,int key){
    if(root == nullptr){
        return false;
    }
    if(root->data == key){
        return true;
    }
    if(key < root->data){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
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

    // Test search functionality
    int key = 4;
    if(search(root, key)){
        cout << "\nElement " << key << " found in the BST." << endl;
    } else {
        cout << "\nElement " << key << " not found in the BST." << endl;
    }

    return 0;
}
