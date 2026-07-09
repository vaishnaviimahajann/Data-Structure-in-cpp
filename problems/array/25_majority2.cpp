#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

// BRUTE FORCE — O(n²)
vector<int> majorityBrute(vector<int>& nums){
    int n = nums.size();
    vector<int> ans;
    
    for(int i = 0; i < n; i++){
        int count = 1;
        
        for(int j = 0; j < n; j++){
            if(j != i && nums[j] == nums[i]){
                count++;
            }
        }
        
        if(count > n/3 && 
           find(ans.begin(), ans.end(), nums[i]) == ans.end()){
            ans.push_back(nums[i]);
        }
    }
    return ans;
}

// BETTER — Hash O(n)
vector<int> majorityBetter(vector<int>& nums){
    int n = nums.size();
    unordered_map<int,int> mp;
    vector<int> ans;
    
    for(int i = 0; i < n; i++){
        mp[nums[i]]++;
    }
    
    for(auto it : mp){
        if(it.second > n/3){
            ans.push_back(it.first);
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1, 1, 1, 3, 3, 2, 2, 2};
    
    cout << "Brute: ";
    vector<int> b = majorityBrute(nums);
    for(int x : b) cout << x << " ";
    cout << endl;
    
    cout << "Better: ";
    vector<int> bt = majorityBetter(nums);
    for(int x : bt) cout << x << " ";
    cout << endl;
    
    return 0;
}