#include<iostream>
using namespace std;
void sumofn(int n , int sum){
    if(n == 0){
        cout<<sum<<endl;
        return;
    }
    sumofn(n-1, sum+n);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    sumofn(n, 0);

    return 0;
}