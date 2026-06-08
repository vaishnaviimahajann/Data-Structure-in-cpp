#include<iostream>
#include<climits>
using namespace std;

int secondSmallest(int arr[], int n){
    int smallest = arr[0];
    int secondSmallest = INT_MAX;  // INT_MIN ki jagah INT_MAX!
    
    for(int i = 1; i < n; i++){
        if(arr[i] < smallest){          // < sign
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest){
            secondSmallest = arr[i];    // < sign
        }
    }
    return secondSmallest;
}

int main(){
    int arr[] = {-2,-3,-4,-5,-6,-8,-7,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Second smallest: " << secondSmallest(arr, n) << endl;
    return 0;
}