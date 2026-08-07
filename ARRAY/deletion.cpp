#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;

    int index = 2;

    // Shift elements to the left
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease size
    size--;

    // Print array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}