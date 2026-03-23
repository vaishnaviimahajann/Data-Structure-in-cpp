#include <iostream>
using namespace std;

int main() {

    // =========================
    // O(1) - Constant Time
    // =========================
    // Time Complexity: O(1)
    // Explanation: Only one operation, does not depend on input size
    cout << "----- O(1) Constant Time -----" << endl;
    int arr1[] = {10, 20, 30, 40, 50};
    cout << "First element: " << arr1[0] << endl;


    // =========================
    // O(n) - Linear Time
    // =========================
    // Time Complexity: O(n)
    // Explanation: Loop runs n times
    cout << "\n----- O(n) Linear Time -----" << endl;
    int arr2[] = {1, 2, 3, 4, 5};
    int n = 5;
    for(int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;


    // =========================
    // O(n^2) - Quadratic Time
    // =========================
    // Time Complexity: O(n^2)
    // Explanation: Nested loop (n * n times)
    cout << "\n----- O(n^2) Quadratic Time -----" << endl;
    int arr3[] = {1, 2, 3};
    int m = 3;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr3[i] << " " << arr3[j] << endl;
        }
    }


    // =========================
    // O(log n) - Logarithmic Time
    // =========================
    // Time Complexity: O(log n)
    // Explanation: Input is divided by 2 each time
    cout << "\n----- O(log n) Logarithmic Time -----" << endl;
    int x = 16;
    while(x > 1) {
        cout << x << " ";
        x = x / 2;
    }
    cout << endl;


    // =========================
    // O(n) + O(n) = O(n)
    // =========================
    // Time Complexity: O(n)
    // Explanation: Two separate loops → n + n = 2n → simplified to O(n)
    cout << "\n----- O(n) + O(n) = O(n) -----" << endl;
    int y = 5;

    for(int i = 0; i < y; i++) {
        cout << i << " ";
    }
    cout << endl;

    for(int i = 0; i < y; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}