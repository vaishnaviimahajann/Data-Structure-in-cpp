#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int missing = -1, repeating = -1;
        
        for(int i = 1; i <= n; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(nums[j] == i){
                    count++;
                }
            }
            if(count == 2){
                repeating = i;
            }
            if(count == 0){
                missing = i;
            }
        }
        
        return {repeating, missing};
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {3, 5, 4, 1, 1};
    
    vector<int> result = sol.findErrorNums(nums);
    
    cout << "Repeating: " << result[0] << endl;
    cout << "Missing: " << result[1] << endl;
    
    return 0;
}