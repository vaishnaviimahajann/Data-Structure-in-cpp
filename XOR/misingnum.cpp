#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& arr) {
    int n = arr.size();

    int xor1 = 0;
    int xor2 = 0;

    for(int i = 0; i <= n; i++) {
        xor1 ^= i;
    }

    for(int x : arr) {
        xor2 ^= x;
    }

    return xor1 ^ xor2;
}

int main() {
    vector<int> arr = {4,0,2,1};

    cout << missingNumber(arr);

    return 0;
}