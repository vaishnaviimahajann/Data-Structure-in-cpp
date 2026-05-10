#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node* insert(node* root, int val) {
    if (root == NULL) {
        return new node(val);
    } else if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

void printTree(node* root) {
    if (root == NULL) return;
    cout << root->data << endl;
    printTree(root->left);
    printTree(root->right);
}

int main() {
    node* root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 5);
    root = insert(root, 15);

    printTree(root);
    return 0;
}