#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr[] = {1, 2, 1, 3, 2, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    unordered_map<int,int> mp;
    
    // INSERT — frequency count
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    cout << "After Insert:" << endl;
    for(auto it : mp){
        cout << it.first << "  " << it.second << endl;
    }
    
    // SEARCH — mp.count()
    cout << "\nSearch Operations:" << endl;
    cout << "1 exists? " << mp.count(1) << endl;   // 1
    cout << "5 exists?  " << mp.count(5) << endl;   // 0
    cout << "Value of 2  " << mp[2] << endl;        // 3
    
    // SIZE
    cout << "\nSize of map  " << mp.size() << endl;  // 3
    
    // DELETE
    mp.erase(1);
    cout << "\nAfter Delete (1 removed):" << endl;
    for(auto it : mp){
        cout << it.first << "  " << it.second << endl;
    }
    
    // SIZE after delete
    cout << "\nSize after delete " << mp.size() << endl;  // 2
    
    return 0;
}