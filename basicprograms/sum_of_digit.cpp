#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter no"<<endl;
    cin>>n;

    int rem;
    int sum = 0;

    while(n > 0){
        rem = n % 10;     // last digit
        sum = sum + rem;  // add to sum
        n = n / 10;       // remove last digit
    }

    cout<<"sum of digit is "<<sum<<endl;

    return 0;
}