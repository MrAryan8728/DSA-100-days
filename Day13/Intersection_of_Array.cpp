#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mp(1001, 0), ans;
        for(auto it: nums1) mp[it] = 1;
        for(auto it: nums2){
            if(mp[it] >= 1){
                ans.push_back(it);
                mp[it] = 0;
            }
        }
        return ans;
    }
};