#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat){
    // code here
    int n = mat.size(), m = mat[0].size();
    k = k % m;
    for (int i = 0; i < n; i++)
    {
        rotate(mat[i].begin(), mat[i].begin() + k, mat[i].end());
    }
    return mat;
}