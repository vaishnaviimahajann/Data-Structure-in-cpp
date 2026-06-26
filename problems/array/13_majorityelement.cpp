/*#include<iostream>
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
}*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int majorityElement(vector<int>& nums){
    int n = nums.size();
    unordered_map<int,int> mp;
    
    // Step 1 — frequency count
    for(int i = 0; i < n; i++){
        mp[nums[i]]++;
    }
    
    // Step 2 — majority dhundho
    for(auto it : mp){
        if(it.second > n/2){
            return it.first;
        }
    }
    
    return -1;
}

int main(){
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    
    cout << "Majority Element: " << majorityElement(nums) << endl;
    
    return 0;
}