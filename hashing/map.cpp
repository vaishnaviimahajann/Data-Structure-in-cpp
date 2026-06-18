#include<iostream>
#include<map>
using namespace std;

int main(){
    int arr[] = {3, 1, 2, 1, 3, 2, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    map<int,int> mp;
    
    // INSERT
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    
    // PRINT
    cout << "After Insert:" << endl;
    for(auto it : mp){
        cout << it.first << "  " << it.second << endl;
    }
    
    // SEARCH
    cout << "\nSearch:" << endl;
    cout << "1 exists?  " << mp.count(1) << endl;
    cout << "5 exists?  " << mp.count(5) << endl;
    
    // DELETE
    mp.erase(1);
    cout << "\nAfter Delete (1 removed):" << endl;
    for(auto it : mp){
        cout << it.first << "" << it.second << endl;
    }
    
    return 0;
}