#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void sort0s1s2s(vector<int>& nums){
    sort(nums.begin(), nums.end());  // ✅
}

int main(){
    vector<int> nums = {0, 1, 0, 2, 2, 1};
    
    sort0s1s2s(nums);
    
    cout << "Sorted: ";
    for(int x : nums){
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}