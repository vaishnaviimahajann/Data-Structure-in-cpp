#include<iostream>
using namespace std;
/*
int main(){
   cout<<"enter the size of array:";
   int n;
   cin>>n;
   int arr[n];
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
         cin>>arr[i];
        }

    cout<<"sorted array is :";
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}*/
int sortedarray(int *arr,int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[]={2,1,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    if(sortedarray(arr,n)){
        cout<<"sorted array";
    }else{
        cout<<"not sorted array";
    }
    return 0;
}
