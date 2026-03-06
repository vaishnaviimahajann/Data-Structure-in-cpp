#include <iostream>
using namespace std;
//here we are removing all duplicate arry elements
int removeduplicate(int *arr,int n){
            int j=0;
            for(int i=1;i<n;i++){
                if(arr[i]!=arr[j]){
                    j++;
                    arr[j]=arr[i];
                }
            }
            for(int i=0;i<=j;i++){
                cout<<arr[i]<<" ";
            }
            return j+1;
}
int main(){
    int arr[]={1,1,1,2,2,3,4,4,5};
    int n=sizeof(arr)/sizeof(int);

    removeduplicate(arr,n);
    return 0;
}