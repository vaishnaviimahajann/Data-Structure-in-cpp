#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int upperBound(vector<int> &nums, int x) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int ans = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > x) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {1, 2, 2, 3};
    int x = 2;
    
    int result = sol.upperBound(nums, x);
    
    cout << "Upper Bound Index: " << result << endl;
    
    return 0;
}