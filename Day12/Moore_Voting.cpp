#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candid = -1, vote = 0;
        for(int i = 0;i < nums.size();i++){
            if(vote == 0){
                candid = nums[i];
                vote = 1;
            }
            else if(candid == nums[i]){
                vote++;
            }else vote--;
        }
        return candid;
    }
};