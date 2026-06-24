/*#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target){
    int n = arr.size();
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] == target){
                return {i, j};  // indexes return karo!
            }
        }
    }
    return {-1, -1};  // nahi mila!
}

int main(){
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> ans = twoSum(arr, target);
    
    cout << "Indexes: [" << ans[0] << ", " << ans[1] << "]" << endl;
    
    return 0;
}*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target){
    unordered_map<int,int> mp;
    int n = arr.size();
    
    for(int i = 0; i < n; i++){
        int compliment = target - arr[i];
        
        if(mp.find(compliment) != mp.end()){
            return {mp[compliment], i};
        }
        
        mp[arr[i]] = i; 
    }
    
    return {-1, -1};
}

int main(){
    vector<int> arr = {2, 7, 11, 15, 22, 23};
    int target = 45;
    
    vector<int> ans = twoSum(arr, target);
    cout << "Indexes: [" << ans[0] << ", " << ans[1] << "]" << endl;
    
    return 0;
}