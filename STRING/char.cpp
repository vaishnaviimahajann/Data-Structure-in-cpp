#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char ch[]={"Hello"};
    cout<<strlen(ch)<<endl;
   
   char let='Z';
   int pos=let-'A';
   cout<<pos<<endl;

   char s[6] = {'H','e','l','l','o','\0'}; // \0 added
cout << s;

    return 0;
}