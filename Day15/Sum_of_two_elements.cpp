#include <bits/stdc++.h> 
using namespace std;

vector<int> findTriplets(vector<int> &arr, int n) {
    vector<int> ans;
    int temp;
    sort(arr.begin(), arr.end());

    for(int i=n-1; i>=2; i--){
        temp = arr[i];
        int s=0, e=i-1;
        while(s<e){
            int sum = arr[s] + arr[e];
            if(sum < temp)
                s++;
            else if (sum>temp)
                e--;
            else{
                ans.push_back(arr[i]);
                ans.push_back(arr[s]);
                ans.push_back(arr[e]);
                return ans;
            }
        }
    }
    return ans;
}