/*#include<iostream>
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
}*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"ENTER NO"<<endl;
    cin>>n;

    int count = 0;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }

    if(count == 2){
        cout<<"PRIME";
    }else{
        cout<<"NOT PRIME";
    }

    return 0;
}