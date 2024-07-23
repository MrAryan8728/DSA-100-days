#include <bits/stdc++.h> 
using namespace std; 

int coverageOfMatrix(vector<vector<int>> &mat) {
    // Write your code here.
    int n = mat.size(), m = mat[0].size(), sum = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(mat[i][j] == 0){
                if(i - 1 >= 0 and mat[i - 1][j] == 1) sum++;
                if(j + 1 < m and mat[i][j + 1] == 1) sum++;
                if(i + 1 < n and mat[i + 1][j] == 1) sum++;
                if(j - 1 >= 0 and mat[i][j - 1] == 1) sum++;
            }else continue;
        }
    }
    return sum;
}
