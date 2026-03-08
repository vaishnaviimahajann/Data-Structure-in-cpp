#include <iostream>
using namespace std;
int main(){
int arr[] = {1,2,3,4,5};
int n = 5;

int center = n/2;

int i = center;
int j = center;

while(i >= 0 || j < n){

    if(i == j){
        cout << arr[i] << " ";
    }
    else{
        if(i >= 0) cout << arr[i] << " ";
        if(j < n) cout << arr[j] << " ";
    }

    i--;
    j++;
}
return 0;
}