#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    int n = 5;

    int center = n/2;

    int i = center-1;
    int j = center+1;

    while(i >= 0 && j < n){

        cout << "sum: " << arr[i] + arr[j] << " ";
        cout << "diff: " << arr[j] - arr[i] << endl;

        i--;
        j++;
    }

    return 0;
}