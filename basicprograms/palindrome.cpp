#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a No"<<endl;
    cin>>n;
    int original=n;
    
    int rem,rev=0;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    if(original == rev){
        cout<<"Palindrome number";
    }else{
        cout<<"Not palindrome";
    }

    return 0;
}