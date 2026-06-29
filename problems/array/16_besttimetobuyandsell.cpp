#include<iostream>
using namespace std;
#include<climits>

int maxprofit(int arr[], int n ){
    int maxprofit = 0;
     for (int i = 0 ; i < n ; i ++){
        for(int j = i+1 ; j < n ; j++){
           int profit = arr[j]-arr[i];
            maxprofit = max(profit,maxprofit);
            
        }

    }
     return maxprofit;
   
}
int main(){
    int arr[] ={7, 1, 5, 3, 6, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"max profit is"<<maxprofit(arr , n);

    return 0;
}