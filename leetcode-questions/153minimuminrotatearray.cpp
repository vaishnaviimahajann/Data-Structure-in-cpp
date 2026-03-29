/*#include <iostream>
using namespace std;

// reverse function
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateRight(int arr[], int n, int d) {
    d = d % n;

    // Step 1: reverse whole array
    reverse(arr, 0, n - 1);

    // Step 2: reverse first d elements
    reverse(arr, 0, d - 1);

    // Step 3: reverse remaining
    reverse(arr, d, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;

    rotateRight(arr, n, d);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;

    rotate(arr, arr + d, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}