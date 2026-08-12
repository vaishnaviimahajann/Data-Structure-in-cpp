#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return ans;
}

int lastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return ans;
}

int main() {

    int arr[] = {5, 10, 10, 10, 10, 20};
    int n = 6;
    int target = 10;

    int first = firstOccurrence(arr, n, target);
    int last = lastOccurrence(arr, n, target);

    cout << "First Occurrence: " << first << endl;
    cout << "Last Occurrence: " << last << endl;

    if (first == -1)
        cout << "Count: 0" << endl;
    else
        cout << "Count: " << last - first + 1 << endl;

    return 0;
}