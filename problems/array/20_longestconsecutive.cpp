#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
#include<set>
using namespace std;

// BRUTE FORCE — O(n³)
int longestBrute(vector<int>& nums){
    int n = nums.size();
    int maxLen = 0;
    
    for(int i = 0; i < n; i++){
        int curr = nums[i];
        int count = 1;
        
        while(true){
            bool found = false;
            for(int j = 0; j < n; j++){
                if(nums[j] == curr + 1){
                    found = true;
                    curr++;
                    count++;
                    break;
                }
            }
            if(!found) break;
        }
        maxLen = max(maxLen, count);
    }
    return maxLen;
}

// BETTER — Sort — O(n log n)
int longestBetter(vector<int>& nums){
    if(nums.empty()) return 0;
    
    sort(nums.begin(), nums.end());
    
    int currentLength = 1;
    int maxLength = 1;
    
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] == nums[i-1]) continue;
        
        if(nums[i] == nums[i-1] + 1){
            currentLength++;
        } else {
            currentLength = 1;
        }
        maxLength = max(maxLength, currentLength);
    }
    return maxLength;
}

// OPTIMAL — unordered_set — O(n)
int longestOptimal(vector<int>& nums){
    if(nums.empty()) return 0;
    
    unordered_set<int> mp(nums.begin(), nums.end());
    
    int maxLength = 0;
    
    for(auto num : mp){
        if(mp.find(num-1) == mp.end()){
            int curr = num;
            int count = 1;
            
            while(mp.find(curr+1) != mp.end()){
                curr++;
                count++;
            }
            maxLength = max(maxLength, count);
        }
    }
    return maxLength;
}

int main(){
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    
    cout << "Brute:   " << longestBrute(nums) << endl;
    cout << "Better:  " << longestBetter(nums) << endl;
    cout << "Optimal: " << longestOptimal(nums) << endl;
    
    return 0;
}