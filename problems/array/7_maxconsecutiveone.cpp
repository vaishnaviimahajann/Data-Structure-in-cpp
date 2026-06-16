#include<iostream>
using namespace std;

int maxones(int arr[], int n){
    int maxcount = 0, count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            count++;
            maxcount = max(maxcount, count);
        }else{
            count = 0;
        }
    }
    return maxcount;
}

int main(){
    int arr[] = {1, 1, 1, 0, 0, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Max consecutive ones: " << maxones(arr, n) << endl;
    return 0;
}