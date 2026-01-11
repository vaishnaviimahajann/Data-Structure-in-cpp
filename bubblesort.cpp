#include<iostream>
using namespace std;
void bbubblesort(int *arr,int n){

    
    for(int i=0;i<n;i++){
        int flag =0;
        for (int j=0;j<n-i-1;j++){
      if (arr[j]>arr[j+1]){
       int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
         flag=1;
      }
    }
    if (flag==0){
        break; 
    }
   
    
     cout<<"sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
}

}
}
int main(){
    int arr[]={98,76,43,1,2,56,78,64,67};
    bbubblesort(arr,9);
    return 0;
}