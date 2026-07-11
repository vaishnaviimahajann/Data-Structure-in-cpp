#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());   // Step 1: sort
        vector<vector<int>> result;

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;   // duplicate i skip

            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j-1]) continue;   // duplicate j skip

                long long left = j + 1;
                long long right = n - 1;
                long long tgt = (long long)target - nums[i] - nums[j];

                while (left < right) {
                    long long sum = nums[left] + nums[right];

                    if (sum < tgt) {
                        left++;
                    } else if (sum > tgt) {
                        right--;
                    } else {
                        result.push_back({nums[i], nums[j], nums[(int)left], nums[(int)right]});

                        left++; right--;

                        // duplicate left/right skip
                        while (left < right && nums[left] == nums[left-1]) left++;
                        while (left < right && nums[right] == nums[right+1]) right--;
                    }
                }
            }
        }

        return result;
    }
};

// ---- Testing ke liye main() ----
int main() {
    Solution sol;

    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> ans = sol.fourSum(nums, target);

    cout << "Input: [1, 0, -1, 0, -2, 2], target = 0\n";
    cout << "Quadruplets found:\n";

    for (auto &quad : ans) {
        cout << "(";
        for (int i = 0; i < quad.size(); i++) {
            cout << quad[i];
            if (i != quad.size() - 1) cout << ", ";
        }
        cout << ")\n";
    }

    return 0;
}