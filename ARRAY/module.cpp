#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    // 1. Traversal
    cout << "Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // 2. Linear Search
    int target = 30;
    int index = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            index = i;
            break;
        }
    }

    cout << "\nTarget index: " << index;

    // 3. Maximum and Minimum
    int maxVal = arr[0];
    int minVal = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal)
            maxVal = arr[i];

        if(arr[i] < minVal)
            minVal = arr[i];
    }

    cout << "\nMaximum: " << maxVal;
    cout << "\nMinimum: " << minVal;

    // 4. Frequency
    int count = 0;
    target = 20;

    for(int i = 0; i < n; i++) {
        if(arr[i] == target)
            count++;
    }

    cout << "\nFrequency of " << target << ": " << count;

    // 5. Reverse Array
    int left = 0, right = n - 1;

    while(left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    cout << "\nReversed Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // 6. Left Rotation by K
    int k = 2;
    k = k % n;

    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);

    cout << "\nLeft Rotated Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // 7. Right Rotation by K
    reverse(arr, arr + (n - k));
    reverse(arr + (n - k), arr + n);
    reverse(arr, arr + n);

    cout << "\nRight Rotated Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
