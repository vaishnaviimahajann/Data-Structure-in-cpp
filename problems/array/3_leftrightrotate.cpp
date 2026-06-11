#include<iostream>
using namespace std;
void leftrotatebyk(int arr[] , int start , int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}
void rightrotatebyk(int arr[] , int start , int end){
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
    int d ;
    cout << "Enter the number of positions to rotate: ";
    cin >> d;
     //  d = d %n; // to handle cases where d is greater than n
     d =(d% n+n) % n; // to handle negative values of d
    

     leftrotatebyk(arr,0,d-1);
     leftrotatebyk(arr,d,n-1);
     leftrotatebyk(arr,0,n-1);
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
    cout << endl;

    int arr2[] = {1, 2, 3, 4, 5};
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int d2;
    cout << "Enter the number of positions to rotate: ";
    cin >> d2;
     d2 =(d2% m+m) % m; // to handle negative values of d2

    rightrotatebyk(arr2,0,m-1);
    rightrotatebyk(arr2,0,d2-1);
    rightrotatebyk(arr2,d2,m-1);
        for(int i = 0; i < m; i++){
            cout << arr2[i] << " ";
        }

    return 0;
}
