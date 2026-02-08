#include<iostream>
using namespace std;
int main(){
    
   /* for(int i=1;i<=5;i++){

         for(int j=1;j<=i;j++){
            
            cout<<"*";
         }
         cout<<endl;
    }*/
    
   /* int n=5;
    for(int i=5;i>=1;i--){

         for(int j=1;j<=i;j++){
            
            cout<<"*";
         }
         cout<<endl;
    }*/

   /* for(int i=1;i<=5;i++){

         for(int j=1;j<=i;j++){
            
            cout<<j;
         }
         cout<<endl;
        }*/

       /* for(int i=5;i>=1;i--){

         for(int j=1;j<=i;j++){
            
            cout<<j;
         }
         cout<<endl;
        }*/

      /*  char ch='A';
        for(int i=1;i<=5;i++){

            for(int j=1;j<=i;j++)
            {
                cout<<ch;
                ch++;
            }
            cout<<endl;
        }*/

          /*char ch='A';
        for(int i=1;i<=5;i++){

            for(int j=1;j<=i;j++)
            {
                cout<<ch;
              
            }
              ch++;
            cout<<endl;
        }*/

        /*int n=5;
        for(int i=1;i<=n;i++){

           cout<<"*";

            for(int j=1;j<=n-1;j++){
              if(i==1 || i==n){
                cout<<"*";
              }
              else{
                cout<<" ";
              }
            }
            cout<<"*"<<endl;
        }*/

       /*int n=5;
        for(int i=1;i<=n;i++){
           for(int j=1;j<=n-i;j++){
            cout<<" ";
                  }
           for(int j=1;j<=i;j++){
            cout<<"*";
           }
           cout<<endl;
           }*/

        /*  int n =5;
          int num=1;
          for(int i=1;i<=n;i++){
             for(int j=1;j<=i;j++){
               cout<<num++<<" ";
             }
            
             cout<<endl;
          }*/

          /*int n =5;
          int num=15;
          for(int i=5;i>=1;i--){
             for(int j=1;j<=i;j++){
               cout<<num--<<" ";
             }
            
             cout<<endl;
          }*/

         /* int n=5;
          for(int i=1;i<=n;i++){
             for(int j=1;j<=n-i;j++){
              cout<< " ";
             }
              for(int j=1;j<=2*i-1;j++){
              cout<<"*";
             }
             cout<<endl;
          }
          for(int i=n;i>=1;i--){
            for(int j=1;j<=n-i;j++){
              cout<<" ";
            }
            for(int j=1;j<=2*i-1;j++){
              cout<<"*";
            }
            cout<<endl;
          }*/

           int n=5;
          for(int i=1;i<=n;i++){
                for(int j=1;j<=i;j++){
                  cout<<"*";
                }
                for(int j=1;j<=(2*n-i);j++){
                  cout<<"  ";
                }
                 for(int j=1;j<=i;j++){
                  cout<<"*";
                }
              cout<<endl;
          }
           for(int i=n-1;i>=1;i--){
                for(int j=1;j<=i;j++){
                  cout<<"*";
                }
                for(int j=1;j<=(2*n-i);j++){
                  cout<<"  ";
                }
                 for(int j=1;j<=i;j++){
                  cout<<"*";
                }
              cout<<endl;
          }
             return 0;
        }
  
