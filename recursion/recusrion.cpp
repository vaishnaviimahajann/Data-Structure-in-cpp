#include <iostream>
using namespace std;

int count = 0;
void hello(){
    cout<<"hello world"<<endl;
    count++;

    if(count == 5){
        return;
    }
    hello();
}
int main(){
    hello();

    return 0;
}