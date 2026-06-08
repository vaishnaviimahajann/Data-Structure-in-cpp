#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
/*
int secondlargest(int arr[],int n){
    sort(arr,arr+n);
    int secondlargest=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=secondlargest){
            return arr[i];
            break;
        }
    }
    return -1; //if there is no second largest element
    
}
int main(){
    int arr[]={1,2,3,4,5,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"second largest element in array is : "<<secondlargest(arr,n)<<endl;
    return 0;
}*/

//better approch
/*int secondlargest(int arr[],int n){
    int largest = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int secondlargest=-1;
    for(int i=0 ; i< n ; i++){
        if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    return secondlargest;
}

int main(){
    int arr[]={1,2,3,6,5,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"second largest element in array is : "<<secondlargest(arr,n)<<endl;
    return 0;
}*/

//optimal approch
int secondlargest(int arr[], int n){
    int largest = arr[0];
    int secondlargest=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    return secondlargest;
}
int main(){
    int arr[]={-2,-3,-4,-5,-6,-8,-7,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"second largest element in array is : "<<secondlargest(arr,n)<<endl;
    return 0;
}