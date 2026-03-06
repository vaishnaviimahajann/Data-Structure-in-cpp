#include <iostream>
using namespace std;
#include <climits>

// here we are moving all the zeroes to the end of the array
int movezerotoend(int *arr,int n){
                 int j=0;
                 for(int i=0;i<n;i++){
                    if(arr[i]!=0){
                        swap(arr[i],arr[j]);
                        j++;
                    }
                 }
   
}
int main(){
    int arr[]={1,0,2,0,3,0,0,4,5,0,0,0,0,0,0,0,0,0,6,7};
    int n=sizeof(arr)/sizeof(int);

    movezerotoend(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}