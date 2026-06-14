/*#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    set<int> temp;
    
    for(int i = 0; i < nums1.size(); i++){
        temp.insert(nums1[i]);
    }
    for(int j = 0; j < nums2.size(); j++){
        temp.insert(nums2[j]);
    }
    
    vector<int> result;
    for(int x : temp){
        result.push_back(x);
    }
    
    return result;
}

int main(){
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 7};
    
    vector<int> ans = unionArray(nums1, nums2);
    
    cout << "Union: ";
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}*/

//optimal solution
#include<iostream>
#include<vector>
using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();
    vector<int> result;
    int i=0 , j=0;
    while(i < n && j < m){
        if(nums1[i] <= nums2[j]){
            if(result.empty() || result.back()!= nums1[i]){
                 result.push_back(nums1[i]);
            }
            i++;
        }
        else{
            if(result.empty() || result.back()!= nums2[j]){
                 result.push_back(nums2[j]);
            }
            j++;
        }
    }
    while(i < n){
        if(result.empty() || result.back()!= nums1[i]){
                 result.push_back(nums1[i]);
            }
            i++;
    }
    while(j < m){
        if(result.empty() || result.back()!= nums2[j]){
                 result.push_back(nums2[j]);
            }
            j++;
    }
}
int main(){
    vector<int> nums1 = {1, 2, 3, 4, 5,9};
    vector<int> nums2 = {1, 2, 7};
    
    vector<int> ans = unionArray(nums1, nums2);
    
    cout << "Union: ";
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}

