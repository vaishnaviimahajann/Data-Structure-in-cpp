#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"ENTER NO"<<endl;
    cin>>n;

    if(n % 1 == 1 && n % n == 0){
        cout<<"NO IS PRIME";
    }else{
        cout<<"NOT PRIME";
    }
    return 0;
}