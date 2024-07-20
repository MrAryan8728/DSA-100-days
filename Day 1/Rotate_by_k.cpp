#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k %= n;
    reverse(begin(nums), begin(nums) + n - k);
    reverse(begin(nums) + n - k, end(nums));
    reverse(begin(nums), end(nums));
}