/*#include<iostream>
using namespace std;
int searchmatrix(int matrix[3][4],int n,int key){
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            if(matrix[i][j]==key){
                cout<<"Element found at index: "<<i<<","<<j<<endl;
                return 1;
            }
        }

    }
    return -1;
    
     
}

int main(){
    int matrix[3][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48}
                     };

    int key=98;
    int result =searchmatrix(matrix,3,key);
     if(result == -1){
        cout << "Element not found" << endl;
    }

    return 0;

}*/


 //using optimized approach which binary search on columns and rows  

#include<iostream>
using namespace std;
bool search (int mat[][4],int n,int m,int key){
    int i=0;int j=m-1;
    while (i<n && j>=0){
      if(mat[i][j]==key){
        cout<<"found at cell("<<i<<","<<j<<")"<<endl;
        return true;
      }else if(mat[i][j]>key){
        //left
        j--;
      }else{
        //down
        i++;
      }

      }
      cout<<"not found";
      return false;

    }
int main(){
    int matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}
                     };

    search(matrix,4,4,33);
    return 0;

}