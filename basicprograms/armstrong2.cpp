#include<iostream>
#include<cmath>   // for pow()
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int original = n;

    // 🔹 Step 1: count digits
    int count = 0;
    int temp = n;

    while(temp > 0){
        count++;
        temp = temp / 10;
    }

    // 🔹 Step 2: Armstrong logic
    int rem, sum = 0;

    while(n > 0){
        rem = n % 10;
        sum = sum + pow(rem, count);  // power
        n = n / 10;
    }

    // 🔹 Check
    if(sum == original){
        cout<<"Armstrong number";
    }else{
        cout<<"Not Armstrong";
    }

    return 0;
}