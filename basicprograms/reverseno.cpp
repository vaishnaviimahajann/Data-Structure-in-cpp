#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"ENTER NO"<<endl;
    cin>>n;

    int rev = 0;

    while(n > 0){
       int digit = n % 10;
       rev = rev * 10 + digit;
       n = n / 10;
    }

    cout<<"REVERSE NO IS "<<rev;

    return 0;
}