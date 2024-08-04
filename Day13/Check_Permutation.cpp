#include<bits/stdc++.h>
using namespace std;

bool areAnagram(string &str1, string &str2){
    unordered_map<char, int> mp1, mp2;
    for(auto it: str1) mp1[it]++;
    for(auto it: str2) mp2[it]++;
    for(auto it: str1) if(mp1[it] != mp2[it]) return false;
    return true;
}

bool are_Anagram(string &str1, string &str2){
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}