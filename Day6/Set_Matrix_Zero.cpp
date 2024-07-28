#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool row_has_zero = false, col_has_zero = false;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    if (i == 0)
                        row_has_zero = true;
                    if (j == 0)
                        col_has_zero = true;
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[0][j] == 0 or matrix[i][0] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << matrix[i][j] << "  ";
            }
            cout << endl;
        }

        if(row_has_zero){
            for(int j = 0;j < m;j++){
                matrix[0][j] = 0;
            }
        }

        if(col_has_zero){
            for(int i = 0;i < n;i++){
                matrix[i][0] = 0;
            }
        }
    }
};