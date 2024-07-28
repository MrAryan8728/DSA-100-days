#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int l = 0, r = height.size() - 1, max_Area = -1;
    while(l <= r){
        max_Area = max(max_Area, min(height[l], height[r])*(r - l));
        if(height[l] < height[r]) l++;
        else r--;
    }
    return max_Area;
}