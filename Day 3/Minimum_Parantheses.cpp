#include<bits/stdc++.h>
using namespace std;

int minimumParentheses(string s) {
    stack<char> st;
    int n = s.size();
    for(int i = 0;i < n;i++){
        if(s[i] == ')'){
            if(!st.empty() and st.top() == '(') st.pop();
            else st.push(s[i]);
        }else{
            st.push(s[i]);
        }
    }
    return st.size();
}