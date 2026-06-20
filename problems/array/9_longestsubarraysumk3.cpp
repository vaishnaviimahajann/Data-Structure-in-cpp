#include<iostream>
#include<unordered_map>
using namespace std;

int longestSubarrayWithSumK(int arr[], int n, int K){
    unordered_map<int,int> mp;
    int sum = 0, maxLen = 0;
    
    for(int i = 0; i < n; i++){
        sum += arr[i];
        
        if(sum == K){
            maxLen = max(maxLen, i+1);
        }
        
        if(mp.find(sum - K) != mp.end()){
            maxLen = max(maxLen, i - mp[sum - K]);
        }
        
        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }
    return maxLen;
}

int main(){
    int arr[] = {-1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int K = 1;
    
    cout << "Longest subarray with sum K: " << longestSubarrayWithSumK(arr, n, K) << endl;
    
    return 0;
}