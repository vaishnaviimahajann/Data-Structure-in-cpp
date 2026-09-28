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

    void insertAtTail(int val) {

        Node* newNode = new Node(val);

        // Empty list
        if (head == NULL) {
            head = tail = newNode;
            return;
        }

        // Go to last node
        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Attach new node
        temp->next = newNode;
        tail = newNode;
    }

    void printList() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {

    LinkedList ll;

    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(8);

    ll.printList();

    return 0;
}
