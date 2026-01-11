#include<iostream>
using namespace std;
int linearserach(int *arr,int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }    
    }
    return -1;
}
int main(){
   /* int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=20;
    int result=linearserach(arr,n,key);
    */
   int n;
    cout<<"How many array elements you want to enter: ";
    cin>>n;
     int arr[n];
    cout<<"Enter the number of elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    int result=linearserach(arr,n,key);

    if(result!=-1){
        cout<<"Element found at index: "<<result<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}