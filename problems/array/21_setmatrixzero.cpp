#include<iostream>
#include<vector>
using namespace std;

// BRUTE FORCE
void setZeroesBrute(vector<vector<int>>& matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    
    // Step 1 — 0 mila toh row aur col ko -1 mark karo
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                // row mark
                for(int k = 0; k < m; k++){
                    if(matrix[i][k] != 0)
                        matrix[i][k] = -1;
                }
                // col mark
                for(int k = 0; k < n; k++){
                    if(matrix[k][j] != 0)
                        matrix[k][j] = -1;
                }
            }
        }
    }
    
    // Step 2 — -1 ko 0 karo
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == -1)
                matrix[i][j] = 0;
        }
    }
}

// BETTER
void setZeroesBetter(vector<vector<int>>& matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    
    vector<int> markrow(n, 0);
    vector<int> markcol(m, 0);
    
    // Step 1 — mark karo
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                markrow[i] = 1;
                markcol[j] = 1;
            }
        }
    }
    
    // Step 2 — 0 karo
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(markrow[i] == 1 || markcol[j] == 1){
                matrix[i][j] = 0;
            }
        }
    }
}

void printMatrix(vector<vector<int>>& matrix){
    for(auto row : matrix){
        for(int x : row){
            cout << x << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    vector<vector<int>> matrix1 = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };
    
    vector<vector<int>> matrix2 = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };
    
    cout << "Brute Force:" << endl;
    setZeroesBrute(matrix1);
    printMatrix(matrix1);
    
    cout << "Better:" << endl;
    setZeroesBetter(matrix2);
    printMatrix(matrix2);
    
    return 0;
}