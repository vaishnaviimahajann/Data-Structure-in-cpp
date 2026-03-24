#include <bits/stdc++.h>
using namespace std;

int main() {
   int arr[6] = {1,2,3,4,5,6};
   int d = 4;
   int n = sizeof(arr)/sizeof(arr[0]);

   reverse(arr, arr + n);   
   reverse(arr, arr + d);       
   reverse(arr + d, arr + n);    
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
sort(arr, arr+n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int low = 0;
int high = n-1;
int target = 5;
while(low <= high){
    int mid = (low+high)/2;
    
    if(mid == target){
        cout<<target;
        break;
    }
    else if(mid <= target){
        low = mid+1;
    }
    else{
        high = mid-1;
    }
    
    
}
   return 0;
}
