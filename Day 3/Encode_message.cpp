#include<bits/stdc++.h>
using namespace std; 

string encode(string &s){
    string ans = "";
    int n = s.size();
    int count = 1;
    for(int i = 1;i < n;i++){
        if(s[i] == s[i - 1]){
            count++;
        }else{
            ans += s[i - 1] + to_string(count);
            count = 1;
        }
    }
    return ans+s[n - 1] + to_string(count);
}