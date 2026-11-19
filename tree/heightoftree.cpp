// Online C++ compiler (editor)
// Write and run C++ online using this editor.
#include<vector>
using namespace std;
#include <iostream>
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};
static int idx=-1;
Node* buildtree(vector<int>preorder)
{
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left=buildtree(preorder);
    root->right=buildtree(preorder);

    return root;
}
int maxdepth(Node* root){
    if(root==NULL){
        return 0;
    }
    int left= maxdepth(root->left);
    int right=maxdepth(root->right);

    return max(left,right)+1;
}
int main() {
  vector<int> preorder = {
   2,3,-1,-1,-1,-1
};
    Node* root = buildtree(preorder);
    cout<<root->data;
    return 0;
}