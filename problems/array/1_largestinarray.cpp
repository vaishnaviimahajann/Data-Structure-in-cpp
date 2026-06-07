/*#include<iostream>
using namespace std;
int largestinarray(int arr[] , int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"largest element in array is : "<<largestinarray(arr,n)<<endl;
    return 0;
}*/

//using sorting
#include<iostream>
#include<algorithm>
using namespace std;
int largestinarray(int arr[] , int n){
    sort(arr,arr+n);
    return arr[n-1];
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"largest element in array is : "<<largestinarray(arr,n)<<endl;
    return 0;
}