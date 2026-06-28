/*#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void printSubarray(vector<int>& nums){
    int n = nums.size();
    int maxsum = INT_MIN;
    int start = 0, end = 0;
    
    for(int i = 0 ; i< n ; i ++){
        int currsum = 0 ;
        for(int j = i ; j < n ; j ++){
                currsum+=nums[j];
                if(currsum>maxsum){
                    maxsum=currsum;
                    start = i;
                    end = j;
                }
        }
    }
    cout << "Max Sum: " << maxsum << endl;
    cout << "Subarray: ";
    for(int i = start; i <= end; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}


int main(){
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    printSubarray(nums);
    return 0;
}*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void printSubarrayOptimal(vector<int>& nums){
    int n = nums.size();
    int maxsum = INT_MIN, currsum = 0;
    int start = 0, end = 0, tempStart = 0;
    
    for(int i = 0; i < n; i++){
        currsum += nums[i];
        
        if(currsum > maxsum){
            maxsum = currsum;
            start = tempStart;  // naya start!
            end = i;            // current end!
        }
        
        if(currsum < 0){
            currsum = 0;
            tempStart = i + 1;  // aage se fresh start!
        }
    }
    
    cout << "Max Sum: " << maxsum << endl;
    cout << "Subarray: ";
    for(int i = start; i <= end; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    printSubarrayOptimal(nums);
    return 0;
}