#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;
        int ans = INT_MAX;

        while(low <= high){
            int mid = low + (high-low)/2;

            if(nums[low] <= nums[mid]){
                // LEFT half sorted hai
                ans = min(ans, nums[low]);
                low = mid + 1;
            }else{
                // RIGHT half sorted hai
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }
        
        return ans;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    
    int result = sol.findMin(nums);
    
    cout << "Minimum Element: " << result << endl;
    
    return 0;
}