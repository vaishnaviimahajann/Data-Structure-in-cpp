/*#include<iostream>
using namespace std;
#include<vector>
vector < int > rearrange(vector<int>&arr){
    int n = arr.size();
    vector<int> pos , neg;
    for(int i = 0 ; i < n ; i++){
    if(arr[i]>0){
        pos.push_back(arr[i]);
    }else{
        neg.push_back(arr[i]);
    }
}
vector<int> result(n);
    for(int i = 0; i < n/2; i++){
        result[2*i] = pos[i];
        result[2*i+1] = neg[i];
    }
    
    return result;
}
int main(){
    vector<int> arr = {3, 1, -2, -5, 2, -4};
    
    vector<int> ans = rearrange(arr);
    
    cout << "Result: ";
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}*/
#include<iostream>
using namespace std;
#include<vector>
vector < int > rearrange(vector<int>&arr){
    int n = arr.size();
    vector<int> res(n);
    int posindex=0,negindex=1;
    for(int i = 0 ; i < n ; i++){
    if(arr[i]>0){
        res[posindex]=arr[i];
        posindex+=2;
    }else{
         res[negindex]=arr[i];
        negindex+=2;
    }
}
return res;
}
int main(){
    vector<int> arr = {3, 1, -2, -5, 2, -4};
    
    vector<int> ans = rearrange(arr);
    
    cout << "Result: ";
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}