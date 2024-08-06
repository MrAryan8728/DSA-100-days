#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx = 0, cnt = 0, n = nums.size() - 1;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] != 0){
                nums[idx++] = nums[i];
            }else cnt++;
        }
        while(cnt--){
            nums[n--] = 0;
        }
    }
};