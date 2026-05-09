#include<iostream>
using namespace std;
#include<queue>

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    while (!q.empty()) {
        cout << "Front element: " << q.front() << endl;
        q.pop();
    }

    return 0;
}


