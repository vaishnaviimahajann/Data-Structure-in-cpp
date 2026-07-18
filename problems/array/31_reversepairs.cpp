#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if((long long)nums[i] > 2LL * nums[j]){
                    count++;
                }
            }
        }
        
        return count;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {1, 3, 2, 3, 1};
    
    int result = sol.reversePairs(nums);
    
    cout << "Reverse Pairs Count: " << result << endl;
    
    return 0;
}