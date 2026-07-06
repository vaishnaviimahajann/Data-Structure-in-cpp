#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat){
    int n = mat.size();
    int m = mat[0].size();
    vector<int> ans;
    
    int srow=0, scol=0;
    int erow=n-1, ecol=m-1;
    
    while(srow <= erow && scol <= ecol){
        
        // Left → Right (top row)
        for(int j = scol; j <= ecol; j++)
            ans.push_back(mat[srow][j]);
        
        // Top → Bottom (right col)
        for(int i = srow+1; i <= erow; i++)
            ans.push_back(mat[i][ecol]);
        
        // Right → Left (bottom row)
        if(srow < erow)
            for(int j = ecol-1; j >= scol; j--)
                ans.push_back(mat[erow][j]);
        
        // Bottom → Top (left col)
        if(scol < ecol)
            for(int i = erow-1; i >= srow+1; i--)
                ans.push_back(mat[i][scol]);
        
        srow++; scol++;
        erow--; ecol--;
    }
    return ans;
}

int main(){
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    vector<int> ans = spiralOrder(mat);
    
    cout << "Spiral: ";
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}