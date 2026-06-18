/*#include<iostream>
using namespace std;

int longestsubarraysumk(int arr[], int n, int K){
    int maxLen = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = 0;
            for(int k = i; k <= j; k++){
                sum += arr[k];
            }
            if(sum == K){
                maxLen = max(maxLen, j-i+1);
            }
        }
    }
    return maxLen;
}

int main(){
    int arr[] = {1, 2, 3, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int K = 3;
    cout << "Longest subarray sum k: " << longestsubarraysumk(arr, n, K) << endl;
    return 0;
}*/
#include<iostream>
using namespace std;

int longestsubarraysumk(int arr[], int n, int K){
    int maxLen = 0;
    
    for(int i = 0; i < n; i++){
         int sum = 0;
        for(int j = i; j < n; j++){
                sum += arr[j];
            
            if(sum == K){
                maxLen = max(maxLen, j-i+1);
            }
        }
    }
    return maxLen;
}

int main(){
    int arr[] = {1, 2, 3, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int K = 3;
    cout << "Longest subarray sum k: " << longestsubarraysumk(arr, n, K) << endl;
    return 0;
}