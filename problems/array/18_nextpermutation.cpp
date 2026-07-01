#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3};
    
    next_permutation(arr.begin(), arr.end());  // ✅ underscore!
    
    cout << "Next Permutation: ";
    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}