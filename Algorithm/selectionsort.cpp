#include<iostream>
using namespace std;
void selectionsort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
        //int temp=arr[i];
        //arr[i]=arr[minIndex];
        //arr[minIndex]=temp;
    }
    cout<<"sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    /*cout<<"enter the size of array: ";
    cin>>n;
    int arr=[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }*/
    int arr[10]={45,76,98,8,2,3,56,67,87,1};
    selectionsort(arr,10);
    return 0;
}