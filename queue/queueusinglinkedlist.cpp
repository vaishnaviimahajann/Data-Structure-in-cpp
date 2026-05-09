#include<iostream>
using namespace std;

// Using Linked List
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Queue {
    Node* head;
    Node* tail;

public:
    // Constructor
    Queue() {
        head = nullptr;
        tail = nullptr;
    }

    // Enqueue (Push)
    void push(int value) {
        Node* newNode = new Node(value);

        // If queue is empty
        if (head == nullptr) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Dequeue (Pop)
    void pop() {
        if (head == nullptr) {
            cout << "Queue is empty. Cannot pop." << endl;
            return;
        }

        Node* temp = head;
        head = head->next;

        // If queue becomes empty
        if (head == nullptr) {
            tail = nullptr;
        }

        delete temp;
    }

    // Front element
    int front() {
        if (empty()) {
            cout << "Queue is empty. No front element." << endl;
            return -1;
        }

        return head->data;
    }

    // Check empty
    bool empty() {
        return head == nullptr;
    }
};

int main() {

    Queue q;

    // Enqueue
    q.push(10);
    q.push(20);
    q.push(30);
    while(!q.empty()) {
        cout << " element: " << q.front() << endl;
        q.pop();
    }

    // Dequeue
    q.pop();
    cout << "Front element after pop: " << q.front() << endl;

    q.pop();
    q.pop();

    // Empty check
    if (q.empty()) {
        cout << "Queue is empty." << endl;
    }

    return 0;
}

