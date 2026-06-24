#include<iostream>
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
}