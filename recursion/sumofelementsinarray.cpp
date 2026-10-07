#include<iostream>
using namespace std;
void sumofarray(int arr[], int n, int count, int i){
    if(i == n - 1){
        cout << "The sum of the elements in the array is: "
             << count + arr[i] << endl;
        return;
    }

    count += arr[i];
    sumofarray(arr, n, count, i + 1);
}
int  main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sumofarray(arr , n , 0 , 0);
    return 0;
}