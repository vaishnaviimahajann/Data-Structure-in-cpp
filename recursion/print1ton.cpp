#include<iostream>
using namespace std;
void printnto1(int n){
    if(n == 0){
        return;
    }
    printnto1(n-1);
    cout<<n<<endl;
    
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printnto1(n);

    return 0;
}