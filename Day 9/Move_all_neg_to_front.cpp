#include <bits/stdc++.h> 
using namespace std;

vector<int> separateNegativeAndPositive(vector<int> &nums){
    int left = 0, right = nums.size() - 1;
    while(left <= right){
        if(nums[left] < 0) left++;
        else if(nums[right] >= 0) right--;
        else swap(nums[left], nums[right]);
    }
    return nums;
}