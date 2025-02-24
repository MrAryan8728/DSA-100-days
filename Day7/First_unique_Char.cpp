#include<bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        for(auto it: s){
            mp[it]++;
        }
        for(int i = 0;i < s.size();i++){
            if(mp[s[i]] > 1) continue;
            else return i;
        }
        return -1;
    }
};