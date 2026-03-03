#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 5, 8, 20};
    int n = 4;

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "Second Smallest: " << secondSmallest;

    return 0;
}