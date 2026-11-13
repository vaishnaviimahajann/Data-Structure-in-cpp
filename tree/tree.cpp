#include<iostream>
using namespace std;
#include<vector>

class Node{
  
    public :
      int data;
      Node* left;
        Node* right;

        Node(int val){
            data = val;
            left = right = NULL;
        }

};
static int index = -1;
Node* buildtree(vector<int> preorder){
    index++;
    
    if(preorder[index] == -1){
        return NULL;
    }

 Node* root = new Node(preorder[index]);
 root->left = buildtree(preorder);
 root->right = buildtree(preorder);

 return root;
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


int main(){
    
    vector<int> preorderr = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildtree(preorderr);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    preorder(root);
    return 0;

}