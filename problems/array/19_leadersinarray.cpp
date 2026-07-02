#include <bits/stdc++.h>
using namespace std;


vector<int> leadersBrute(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;

    for (int i = 0; i < n; i++) {
        bool isLeader = true;

        for (int j = i + 1; j < n; j++) {
            if (nums[j] > nums[i]) {
                isLeader = false;
                break;
            }
        }

        if (isLeader) {
            res.push_back(nums[i]);
        }
    }
    return res;
}


vector<int> leadersOptimal(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    int maxSoFar = INT_MIN;

    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= maxSoFar) {
            res.push_back(nums[i]);
            maxSoFar = nums[i];
        }
    }

    reverse(res.begin(), res.end()); // order maintain karne ke liye
    return res;
}


void printVector(const vector<int>& v) {
    cout << "{ ";
    for (int x : v) cout << x << " ";
    cout << "}" << endl;
}


int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};

    cout << "Input array: ";
    printVector(nums);

    vector<int> bruteResult = leadersBrute(nums);
  
    printVector(bruteResult);

    vector<int> optimalResult = leadersOptimal(nums);

    printVector(optimalResult);

    // Sanity check -> dono same result de rahe hain ya nahi
 
    return 0;
}