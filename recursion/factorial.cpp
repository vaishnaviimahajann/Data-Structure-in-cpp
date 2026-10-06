#include<iostream>
using namespace std;

void factorial(int n , int fact){
    if(n == 0){
        cout<<fact<<endl;
        return;
    }
    factorial(n-1 ,fact*n);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    factorial(n, 1);

    return 0;
}