#include<iostream>
using namespace std;
int maxelement(int *arr,int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            
        }
    }
  return max;

}

int main(){
    int arr[]={10,23,43,56,43,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=maxelement(arr,n);
    cout<<"Maximum element is: "<<max<<endl;
   
}