#include<iostream>
using namespace std;
int sortedarray(int arr[],int n){
    for(int i = 0; i< n -1 ; i++){
        if(arr[i]>arr[i+1]){
            return false;
            break;
        }
        
    }
    return true;
        

}
int main(){
    int arr[]={1,2,3,4,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(sortedarray(arr,n)){
        cout<<"array is sorted "<<endl;
    }
    else{
        cout<<"array is not sorted "<<endl;
    }
    return 0;
}