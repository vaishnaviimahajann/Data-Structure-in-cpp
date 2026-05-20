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

// Postorder Traversal
void postorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    postorder(root->left);       // Left
    postorder(root->right);      // Right
    cout << root->data << " ";   // Root
}

int main() {

    Node* root = new Node('F');

    root->left = new Node('D');
    root->right = new Node('H');

    root->left->left = new Node('B');
    root->left->right = new Node('E');

    root->right->left = new Node('G');
    root->right->right = new Node('I');

    cout << "Postorder Traversal: ";
    postorder(root);

    return 0;
}