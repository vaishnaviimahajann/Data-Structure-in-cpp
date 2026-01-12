#include <iostream>
#include <algorithm>
using namespace std;

void trap(int *height, int n) {
    int leftmax[n];
    int rightmax[n];

    // LEFT MAX
    leftmax[0] = height[0];
    for (int i = 1; i < n; i++) {
        leftmax[i] = max(leftmax[i - 1], height[i]);
    }

    // RIGHT MAX
    rightmax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightmax[i] = max(rightmax[i + 1], height[i]);
    }

    // PRINT
    cout << "Leftmax: ";
    for (int i = 0; i < n; i++) cout << leftmax[i] << " ";

    cout << "\nRightmax: ";
    for (int i = 0; i < n; i++) cout << rightmax[i] << " ";

    cout << endl;
}

int main() {
    int height[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);

    trap(height, n);
    return 0;
}
