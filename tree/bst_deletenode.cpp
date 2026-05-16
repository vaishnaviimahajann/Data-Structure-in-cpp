#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Insert into BST
Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

// Build BST
Node* buildbst(int arr[], int n) {
    Node* root = NULL;

    for (int i = 0; i < n; i++) {
        root = insert(root, arr[i]);
    }

    return root;
}

// Inorder Traversal
void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Get Inorder Successor
Node* getinordersuc(Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Delete Node
Node* delnode(Node* root, int val) {
    if (root == NULL) {
        return NULL;
    }

    if (val < root->data) {
        root->left = delnode(root->left, val);
    }
    else if (val > root->data) {
        root->right = delnode(root->right, val);
    }
    else {

        // Case 1: No child
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // Case 2: One child
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 3: Two children
        Node* IS = getinordersuc(root->right);
        root->data = IS->data;
        root->right = delnode(root->right, IS->data);
    }

    return root;
}

int main() {

    int arr[] = {8, 5, 3, 1, 4, 6, 10, 11};

    Node* root = buildbst(arr, 8);

    cout << "Before Deletion: ";
    inorder(root);

    root = delnode(root, 4);

    cout << "\nAfter Deletion: ";
    inorder(root);

    return 0;
}