#include <iostream>
using namespace std;

int main() {

    int arr[] = {5, 3, 8, 2, 1};
    int n = 5;

    for (int i = 1; i < n; i++) {

        int key = arr[i];
        int j = i - 1;

        // Shift bigger elements to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key at correct position
        arr[j + 1] = key;
    }

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}