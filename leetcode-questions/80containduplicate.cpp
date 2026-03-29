#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){          // pick each element
            for(int j = i+1; j < n; j++){    // compare with remaining elements
                if(nums[i] == nums[j]){      // duplicate found
                    return true;
                }
            }
        }
        return false; // no duplicates
    }
};

int main() {
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    if(sol.containsDuplicate(nums)) {
        cout << "Duplicate found!" << endl;
    } else {
        cout << "No duplicates found." << endl;
    }

    return 0;
}
