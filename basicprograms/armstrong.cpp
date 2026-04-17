#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a No"<<endl;
    cin>>n;
    int original=n;
    
    int rem,sum=0;
    while(n>0){
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;

    }
    if(original == sum){
        cout<<"Armstrong number";
    }else{
        cout<<"Not Armstrong";
    }

    return 0;
}