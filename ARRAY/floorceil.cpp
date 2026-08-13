#include <iostream>
using namespace std;

int findFloor(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int floor = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] <= target) {
            floor = arr[mid];
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return floor;
}

int findCeil(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int ceil = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target) {
            ceil = arr[mid];
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ceil;
}

int main() {

    int arr[] = {24, 45, 56, 67, 89, 90};
    int n = 6;
    int target = 50;

    cout << "Floor: " << findFloor(arr, n, target) << endl;
    cout << "Ceil: " << findCeil(arr, n, target) << endl;

    return 0;
}