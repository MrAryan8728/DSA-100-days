#include <bits/stdc++.h>
using namespace std;  

bool isMatrixSymmetric(vector<vector<int>> matrix){
    // Write your code here. 
    int n = matrix.size();
    for(int i = 0;i < n;i++){
        for(int j = i;j < n;j++){
            if(i != j and matrix[i][j] != matrix[j][i]) return false;
        }
    }
    return true;
}