#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);

    int left = 0;
    int right = n - 1;
    int pos = n - 1;

    while (left <= right) {
        if (abs(nums[left]) > abs(nums[right])) {
            result[pos] = nums[left] * nums[left];
            left++;
        } 
        else {
            result[pos] = nums[right] * nums[right];
            right--;
        }
        pos--;
    }

    return result;
}

int main() {
    vector<int> nums = {-7, -3, 2, 3, 11};

    vector<int> ans = sortedSquares(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}