#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        long long maxProduct = LLONG_MIN;
        
        for(int i = 0; i < n; i++){
            long long product = 1;
            for(int j = i; j < n; j++){
                product = product * nums[j];
                maxProduct = max(maxProduct, product);
            }
        }
        
        return (int)maxProduct;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {2, 3, -2, 4};
    
    int result = sol.maxProduct(nums);
    
    cout << "Maximum Product: " << result << endl;
    
    return 0;
}