#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums){
    int n = nums.size();
    
    for(int i = 0; i < n; i++){
        int count = 0;
        
        for(int j = 0; j < n; j++){
            if(nums[j] == nums[i]){
                count++;
            }
        }
        
        if(count > n/2){
            return nums[i];
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {3, 2, 3};
    
    cout << "Majority Element: " << majorityElement(nums) << endl;
    
    return 0;
}