#include <iostream>
using namespace std;

int lowerBound(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}

int upperBound(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > target) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {

    int arr[] = {5, 10, 20, 20, 20, 30, 40};
    int n = 7;
    int target = 20;

    cout << "Lower Bound: " << lowerBound(arr, n, target) << endl;
    cout << "Upper Bound: " << upperBound(arr, n, target) << endl;

    return 0;
}