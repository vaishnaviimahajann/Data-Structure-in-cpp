#include<iostream>
#include<queue>
using namespace std;

class Stack {
    queue<int> q1;
    queue<int> q2;

public:

    // Push operation
    void push(int data) {

        // Insert into q2
        q2.push(data);

        // Move all q1 elements to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Swap q1 and q2
        swap(q1, q2);
    }

    // Pop operation
    void pop() {
        if (!q1.empty()) {
            q1.pop();
        }
    }

    // Top element
    int top() {
        if (!q1.empty()) {
            return q1.front();
        }
        return -1;
    }

    // Empty check
    bool empty() {
        return q1.empty();
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}