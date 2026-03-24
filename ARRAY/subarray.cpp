/*#include<iostream>
using namespace std;
//here we are printing the starting and ending index of the subarray
void printsubarray(int *arr,int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
           cout<<"("<< start<<","<< end<<")";
        }
        cout<<endl;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    printsubarray(arr,n);
    return 0;
}*/
#include<iostream>
using namespace std;

 // here we are printing an subarray of array

void printsubarray(int *arr,int n){
    for(int start=0;start<n;start++){
          for(int end=start;end<n;end++){
                   for(int i=start;i<=end;i++){
                              cout<<arr[i];
                        }
                cout<<",";
         }
        cout<<endl;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    printsubarray(arr,n);
    return 0;
}