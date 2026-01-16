#include<iostream>
#include<climits>
using namespace std;

void countsort(int arr[], int n) {

    int freq[100000] = {0};
    int minval = INT_MAX, maxval = INT_MIN;

    // find min & max
    for(int i = 0; i < n; i++){
        minval = min(minval, arr[i]);
        maxval = max(maxval, arr[i]);
    }

    // frequency count
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    // sorting
    int j = 0;
    for(int i = minval; i <= maxval; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }

    // print array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[8] = {1,4,1,3,2,4,3,7};
    int n = 8;
    countsort(arr, n);
    return 0;
}
