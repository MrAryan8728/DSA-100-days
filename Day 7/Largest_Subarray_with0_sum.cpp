#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        unordered_map<int, int> mp;
        mp[0] = -1;
        int sum = 0, ans = 0;
        for(int i = 0;i < n;i++){
            sum += arr[i];
            if(mp.find(sum) != mp.end()){
                ans = max(i - mp[sum], ans);
            }else mp[sum] = i;
        }
        return ans;
    }
};