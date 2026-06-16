#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,6,3,4,1,6,6,3,4,5,6};
     int n = sizeof(arr)/sizeof(arr[0]);

     int hash[10]={0};
     
     for(int i = 0 ; i < n ; i++){
        hash[arr[i]]++;
     }


     cout<<"1 occures"<<hash[1]<<endl;
     cout<<"6 occures"<<hash[6]<<endl;



    return 0;
}