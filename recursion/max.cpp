#include<iostream>
using namespace std;
void maxx(int arr[] , int n , int max , int i ){
    if(i == n-1){
        cout<<"The maximum element in the array is: "<<max<<endl;
        return;
    }
    if(arr[i] > max){
        max = arr[i];
    }
    maxx(arr, n, max, i + 1);
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    maxx(arr , n , arr[0] , 0);
    return 0;
}