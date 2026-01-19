#include<iostream>
using namespace std;
int main(){
    int student[3][3]={{100,200,566},
                        {394,644,224},
                        {544,634,335}
                       };
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<student[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}