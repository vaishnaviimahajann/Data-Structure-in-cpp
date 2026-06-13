/*#include<iostream>
#include<vector>
using namespace std;
void movezerostoend(int arr[] , int n){
    vector<int>temp;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    int nonzero=temp.size();
    for(int i = 0; i < nonzero; i++){
        arr[i] = temp[i];
    }
    for(int i = nonzero; i < n; i++){
        arr[i] = 0;
    }
}
int main(){
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    movezerostoend(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
*/
// Time Complexity: O(n) where n is the size of the array
// Space Complexity: O(n) due to the temporary vector used to store non-zero elements.

//optimal approach
#include<iostream>
using namespace std;
void movezerotoend(int arr[],int n){
    int j=0;
    for(int i =0 ; i< n ; i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main(){
    int arr[] = {0, 1, 0, 3, 0,0,0,3,4,5,0,0,0,};
    int n = sizeof(arr)/sizeof(arr[0]);
    movezerotoend(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}