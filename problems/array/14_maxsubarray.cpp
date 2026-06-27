#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// BRUTE FORCE — O(n³)
int maxSubArrayBrute(vector<int>& nums){
    int n = nums.size();
    int maxsum = INT_MIN;
    
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int currsum = 0;
            for(int k = i; k <= j; k++){
                currsum += nums[k];
            }
            maxsum = max(maxsum, currsum);
        }
    }
    return maxsum;
}

// BETTER — O(n²)
int maxSubArrayBetter(vector<int>& nums){
    int n = nums.size();
    int maxsum = INT_MIN;
    
    for(int i = 0; i < n; i++){
        int currsum = 0;
        for(int j = i; j < n; j++){
            currsum += nums[j];
            maxsum = max(maxsum, currsum);
        }
    }
    return maxsum;
}

// OPTIMAL — Kadane's O(n)
int maxSubArrayOptimal(vector<int>& nums){
    int n = nums.size();
    int maxsum = INT_MIN, currsum = 0;
    
    for(int i = 0; i < n; i++){
        currsum += nums[i];
        maxsum = max(maxsum, currsum);
        if(currsum < 0){
            currsum = 0;
        }
    }
    return maxsum;
}

int main(){
    vector<int> nums = {-2, 4, 6, -1, 7};
    
    cout << "Brute Force:  " << maxSubArrayBrute(nums) << endl;
    cout << "Better:       " << maxSubArrayBetter(nums) << endl;
    cout << "Optimal:      " << maxSubArrayOptimal(nums) << endl;
    
    return 0;
}