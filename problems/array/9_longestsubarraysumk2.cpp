#include<iostream>
using namespace std;

int longestSubarraySumK(int arr[], int n, int K){
    int left = 0, right = 0;
    int sum = 0, maxLen = 0;
    
    while(right < n){
        sum += arr[right];          // window expand karo
        
        while(sum > K){             // sum zyada ho gaya?
            sum -= arr[left];       // left se element hatao
            left++;
        }
        
        if(sum == K){               // perfect match!
            maxLen = max(maxLen, right - left + 1);
        }
        
        right++;                    // right ko aage badhao
    }
    
    return maxLen;
}

int main(){
    int arr[] = {1, 2, 1, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int K = 3;
    
    cout << "Longest subarray sum K: " << longestSubarraySumK(arr, n, K) << endl;
    
    return 0;
}