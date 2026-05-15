#include<iostream>
#include<vector>
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
    if (root == nullptr) {
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
    Node* root = nullptr;

    for (int i = 0; i < n; i++) {
        root = insert(root, arr[i]);
    }

    return root;
}

// Print Path
void printpath(vector<int> path) {
    for (int i = 0; i < path.size(); i++) {
        cout << path[i] << " ";
    }
    cout << endl;
}

// Root to Leaf Path Helper
void pathhelper(Node* root, vector<int>& path) {
    if (root == nullptr) {
        return;
    }

    path.push_back(root->data);

    // Leaf node
    if (root->left == nullptr && root->right == nullptr) {
        printpath(path);
    } else {
        pathhelper(root->left, path);
        pathhelper(root->right, path);
    }

    path.pop_back();
}

// Main function to print all root-to-leaf paths
void roottoleafpath(Node* root) {
    vector<int> path;
    pathhelper(root, path);
}

// Inorder Traversal
void inorder(Node* root) {
    if (root == nullptr) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {

    int arr[] = {5, 1, 3, 4, 2, 7};

    Node* root = buildbst(arr, 6);

    cout << "Inorder Traversal: ";
    inorder(root);

    cout << "\nRoot to Leaf Paths:\n";
    roottoleafpath(root);

    return 0;
}