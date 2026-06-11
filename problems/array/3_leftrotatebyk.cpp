#include<iostream>
using namespace std;
void leftrotateby1(int arr[] , int start , int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout << "Enter the number of positions to rotate: ";
    cin >> k;

    leftrotateby1(arr,0,k-1);
    leftrotateby1(arr,k,n-1);
    leftrotateby1(arr,0,n-1);
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }

    return 0;
}
