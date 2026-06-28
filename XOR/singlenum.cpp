#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};

    int ans = 0;

    for(int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];

        cout << "Element = " << arr[i]
             << " , Ans = " << ans << endl;
    }

    cout << "\nFinal Answer = " << ans;

    return 0;
}