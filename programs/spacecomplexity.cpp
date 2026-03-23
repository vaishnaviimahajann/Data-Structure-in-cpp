#include <iostream>
using namespace std;

int main() {

    // =========================
    // O(1) - Constant Space
    // =========================
    // Space Complexity: O(1)
    // Explanation: Only few variables used, no extra memory based on input
    cout << "----- O(1) Constant Space -----" << endl;
    int a = 10;
    int b = 20;
    int sum = a + b;
    cout << "Sum: " << sum << endl;


    // =========================
    // O(n) - Linear Space
    // =========================
    // Space Complexity: O(n)
    // Explanation: Extra array of size n created
    cout << "\n----- O(n) Linear Space -----" << endl;
    int n = 5;
    int arr[n];   // extra memory depends on n

    for(int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    // =========================
    // O(n^2) - Quadratic Space
    // =========================
    // Space Complexity: O(n^2)
    // Explanation: 2D array (matrix) using n*n space
    cout << "\n----- O(n^2) Quadratic Space -----" << endl;
    int m = 3;
    int matrix[3][3];   // n*n space

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            matrix[i][j] = i + j;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    // =========================
    // O(1) Space with O(n) Time
    // =========================
    // Space Complexity: O(1)
    // Explanation: Loop runs n times but no extra memory used
    cout << "\n----- O(1) Space with O(n) Time -----" << endl;
    int x = 5;

    for(int i = 0; i < x; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}