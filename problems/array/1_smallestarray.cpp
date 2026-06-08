/*#include<iostream>
using namespace std;
int smallestinarray(int arr[] , int n){
    int smallest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    return smallest;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"smallest element in array is : "<<smallestinarray(arr,n)<<endl;
    return 0;
}*/

//using sorting
#include<iostream>
#include<algorithm>
using namespace std;
int smallestinarray(int arr[] , int n){
    sort(arr,arr+n);
    return arr[0];
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"smallest element in array is : "<<smallestinarray(arr,n)<<endl;
    return 0;
}