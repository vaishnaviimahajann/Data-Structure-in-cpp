#include<iostream>
using namespace std;

void fibonacci(int n , int a , int b){
    if(n == 0){
        return;
    }
    cout<<a<<endl;
    fibonacci(n-1 , b , a+b);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fibonacci(n, 0 , 1);

    return 0;
}