#include<iostream>
#include<set>
using namespace std;
/*
int removeduplicates(int arr[],int n){
    set <int> s;
    for(int i = 0; i< n ; i++){
        s.insert(arr[i]);
    }
    int i = 0;
    for(int x: s){
        arr[i] = x;
        i++;
    }
    return i;

}
int main(){
    int arr[] = {1,2,3,2,5,6,2,1,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = removeduplicates(arr, n);  // k = 5
    
    for(int i = 0; i < k; i++){  
        cout << arr[i] << " ";
    }
    return 0;
}*/
#include<iostream>
using namespace std;

int removeduplicates(int arr[], int n){
    int j = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[j]){
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;
}

int main(){
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =  removeduplicates(arr, n);
    
    cout << "Unique elements count: " << k << endl;
    cout << "Array: ";
    for(int i = 0; i < k; i++){
        cout << arr[i] << " ";
    }
    return 0;
}