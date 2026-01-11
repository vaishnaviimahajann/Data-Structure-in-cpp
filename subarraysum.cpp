/*#include<iostream>
using namespace std;
void printsubarraysum(int*arr,int n){
     int maxsum= INT8_MIN;
    for(int start=0;start<n;start++){
       
        for(int end=start;end<n;end++){
            int cursum=0;
            //cout<<arr[i];
            for(int i=start;i<=end;i++ ){
            cursum+=arr[i];
            }
            cout<<cursum<<",";
            maxsum=max(maxsum,cursum);
        }
        cout<<endl;
     
    }
     cout<<"maximum subarray sum ="<<maxsum<<endl;
    
}
int main(){
    int arr[6]={2,-3,6,-5,4,1};
    int n=6;
    printsubarraysum(arr,n);
    return 0;
}*//*
#include<iostream>
using namespace std;
void printsubarraysum(int*arr,int n){
     int maxsum= INT8_MIN;
    for(int start=0;start<n;start++){
       
        for(int end=start;end<n;end++){
            int cursum=0;
            cursum+=arr[end];
            maxsum=max(maxsum,cursum);
        }
        cout<<endl;
     
    }
     cout<<"maximum subarray sum ="<<maxsum<<endl;
    
}
int main(){
    int arr[6]={2,-3,6,-5,4,1};
    int n=6;
    printsubarraysum(arr,n);
    return 0;
}*/
#include <iostream>
using namespace std;
void printsubarraysum(int*arr,int n){
     int maxsum= INT8_MIN;
     int cursum=0;
     for(int i=0;i<n;i++){
        cursum+=arr[i];
        maxsum=max(maxsum,cursum);
        if(cursum<0){
            cursum=0;
        }

     }
     cout<<"maximum subarray sum ="<<maxsum<<endl;
    
}
int main(){
    int arr[6]={2,-3,6,-5,4,1};
    int n=6;
    printsubarraysum(arr,n);
    return 0;
}