#include<iostream>
using namespace std;
int main(){
    /*1
     2 2
    3 3 3
   4 4 4 4
     
int n=4;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<i<<" ";
    }
    cout<<endl;
}*/

/* 4 4 4 4
    3 3 3
     2 2 
      1

  int n=4;
for(int i=n;i>=1;i--){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<i<<" ";
    }
    cout<<endl;
    
    
}*/

/*  
************
************
************
************
************

int n=7;
for(int i=1;i<=n;i++){
   for(int j=1;j<=n;j++){
    cout<<"*";
   }
   cout<<endl;
}*/

/* 1
  121
 12321
1234321*/
int n=4;
for(int i=0;i<=n;i++){

    for(int j=0;j<=n-i-1;j++){
        cout<<" ";
    }
    for(int j=1;j<=i+1;j++){
        cout<<j;
    }
    for(int j=i;j>0;j--){
        cout<<j;
    }
    cout<<endl;
}
return 0;
}