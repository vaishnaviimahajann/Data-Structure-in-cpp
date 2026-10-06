#include<iostream>
using namespace std;
void powerofn(int n , int x , int power){
    if(n == 0){
        cout<<power<<endl;
        return;
    }
    powerofn(n - 1 , x , power*x);
}
int main(){
    int n, x;
    cout<<"Enter a x: ";
    cin>>x;
    cout<<"Enter a n: ";
    cin>>n;
    powerofn(n, x , 1);

    return 0;
}