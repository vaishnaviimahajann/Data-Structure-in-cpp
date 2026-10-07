#include<iostream>
using namespace std;
void printtableof21(int n){
    if(n == 0){
        return;
    }
    printtableof21(n-1);
    cout<<n*2<<endl;
    
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printtableof21(n);

    return 0;
}