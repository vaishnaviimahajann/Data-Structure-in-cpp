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

    int getLength() {
        Node* temp = head;
        int length = 0;

        while (temp != NULL) {
            length++;
            temp = temp->next;
        }

        return length;
    }
};

int main() {

    LinkedList list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);

    cout << "Length of Linked List: "
         << list.getLength() << endl;

    return 0;
}
