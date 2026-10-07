#include<iostream>
using namespace std;
void checkarray(int arr[], int n, int i) {
    if (i == n - 1) {
        cout << "The array is sorted." << endl;
        return;
    }
    if (arr[i] > arr[i + 1]) {
        cout << "The array is not sorted." << endl;
        return;
    }
    checkarray(arr, n, i + 1);
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    checkarray(arr, n, 0);
    return 0;
}