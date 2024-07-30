#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<int> &arr)
{
    // code here...
    int ans = INT_MIN, curr = 0, mn = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        curr += arr[i];
        if (curr < 0)
            curr = 0;
        ans = max(ans, curr);
        mn = max(mn, arr[i]);
    }
    return ans == 0 ? mn : ans;
}