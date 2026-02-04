#include<iostream>
using namespace std ;
int binaryserach(int arr[],int n,int key)
{
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
              cout<<"Element found at index: "<<mid<<endl;
           return mid;
         
        }
        else if(key>arr[mid]){
            start=mid+1; 
        }
        else{
            end=mid-1;
        }
    }
    cout<<"Element not found"<<endl;
    return -1;
    
}

int main(){
   /*int arr[]={24,67,89,99,101,125};
   int n = sizeof(arr)/sizeof(int);
   cout<<binaryserach(arr,n,45);*/
   cout<<"how many array elemts you want to enter: ";
   int n;
   cin>>n;
   int arr[n];
   cout<<"Enter the number of elements in the array: ";
   for(int i=0;i<n;i++){
   cin>>arr[i];
   }
    cout<<"Enter the element to be searched: ";
   int key;
   cin>>key;
   cout<<binaryserach(arr,n,key);
    return 0;
}