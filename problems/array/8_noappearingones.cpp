/*#include<iostream>
using namespace std;
int noappearingones(int arr [] , int n){
    for(int i = 0 ; i < n ; i ++){
        int count = 0 ;
        for(int j = 0 ; j < n ; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count == 1){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[] = {1, 1,3,5,3,5,};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"no arreaping ones is" << noappearingones(arr,n);

    return 0;

}*/
#include<iostream>
using namespace std;
#include<unordered_map>
int noappearingones(int arr [] , int n){
    unordered_map<int,int>mp;

    for(int i = 0 ; i < n ; i++){
               mp[arr[i]]++;   
    }
    for(auto it : mp ){
        if(it.second == 1){
            return it.first;
        }
    }
    return -1;

}
int main(){
    int arr[] = {1,3,5,3,5,7,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"no arreaping ones is" << noappearingones(arr,n);

    return 0;

}
/*
#include<iostream>
using namespace std;

int noappearingonce(int arr[], int n){
    int xorr = 0;
    
    for(int i = 0; i < n; i++){
        xorr = xorr ^ arr[i];  // sabko XOR karo!
    }
    
    return xorr;  // akela element bach jayega!
}

int main(){
    int arr[] = {1, 1, 3, 5, 7, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Number appearing once: " << noappearingonce(arr, n) << endl;
    return 0;
}*/