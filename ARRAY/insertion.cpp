#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;

    int index = 2;
    int value = 25;

    // Step 1: Shift elements right to left
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Step 2: Insert value
    arr[index] = value;

    // Step 3: Increase size
    size++;

    // Step 4: Print array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}