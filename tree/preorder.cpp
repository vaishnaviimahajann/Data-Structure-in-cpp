#include<iostream>
using namespace std;

class Node {
public:
    char data;
    Node* left;
    Node* right;

    Node(char val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Preorder Traversal
void preorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << " ";   // Root
    preorder(root->left);        // Left
    preorder(root->right);       // Right
}

int main() {

    Node* root = new Node('F');

    root->left = new Node('D');
    root->right = new Node('H');

    root->left->left = new Node('B');
    root->left->right = new Node('E');

    root->right->left = new Node('G');
    root->right->right = new Node('I');

    cout << "Preorder Traversal: ";
    preorder(root);

    return 0;
}
