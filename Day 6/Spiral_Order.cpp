#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int top = 0, left = 0;
        int btm = matrix.size() - 1, right = matrix[0].size() - 1;

        while (top <= btm and left <= right) {
            for (int i = left; i <= right; i++)
                ans.push_back(matrix[top][i]);
            top++;

            for (int i = top; i <= btm; i++)
                ans.push_back(matrix[i][right]);
            right--;

            if (top <= btm) {
                for (int i = right; i >= left; i--)
                    ans.push_back(matrix[btm][i]);
                btm--;
            }

            if (left <= right) {
                for (int i = btm; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }

        return ans;
    }
};