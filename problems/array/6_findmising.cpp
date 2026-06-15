/*#include<iostream>
using namespace std;
int findmissing (int arr[] , int n , int N){
    for(int i = 1; i < n ; i++){
        bool found = false;
        for(int j =0 ; j<n ; j++){
            if (arr[j] == i){
                found = true;
                break;
            }
        }
        if(!found){
            return i;
        }
    }
}
int main(){

   int arr[] = {1, 2, 3, 4, 5, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int N = n + 1;  // 1 to N tak — N = 7

    cout << "Missing number: " << findmissing(arr, n, N) << endl;
    return 0;

}*/
//better approch

#include<iostream>
using namespace std;

int findmissing(int arr[], int n, int N){
    int actualsum = 0;          // bahar declare karo!
    
    for(int i = 0; i < n; i++){
        actualsum += arr[i];    // sab add karo
    }
    
    int expectedsum = N*(N+1)/2;  // formula
    int missing = expectedsum - actualsum;
    
    return missing;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int N = n + 1;  // N = 7 (1 to 7 mein 6 elements, 1 missing)
    
    cout << "Missing number: " << findmissing(arr, n, N) << endl;
    return 0;
}