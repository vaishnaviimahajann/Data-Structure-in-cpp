#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 5, 8, 20};
    int n = 4;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest: " << secondLargest;

    return 0;
}