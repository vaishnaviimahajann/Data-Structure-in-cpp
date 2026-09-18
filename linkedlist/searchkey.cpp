#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    bool searchKey(int key) {

        Node* temp = head;

        while (temp != NULL) {

            if (temp->data == key) {
                return true;
            }

            temp = temp->next;
        }

        return false;
    }
};

int main() {

    LinkedList list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);

    int key = 3;

    if (list.searchKey(key)) {
        cout << key << " is present in the linked list." << endl;
    } else {
        cout << key << " is not present in the linked list." << endl;
    }

    return 0;
}
