/*#include <iostream>
using namespace std;
void printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

int main(){
    int arr[]={5,2,3,4,1};
    int n=sizeof(arr)/sizeof(int);
    int copyarr[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;
        copyarr[i]=arr[j];
    }
       for (int i=0;i<n;i++){
             arr[i]=copyarr[i];
        } 

    printarr(arr,n);

    return 0;
}*/

/*REVERSE ARRAY ie TWO POINTER APPROOCH*/
#include<iostream>
using namespace std;
void printarr(int *arr,int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[]={2,5,6,3,1};
    int n=sizeof(arr)/sizeof(int);
    int str=0,end=n-1;
    while(str<end){
        int temp=arr[str];
        arr[str]=arr[end];
        arr[end]=temp;
        str++;
        end--;
    }
 printarr(arr,n);

    return 0;
}