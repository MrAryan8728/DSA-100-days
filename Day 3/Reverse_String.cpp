#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stack<char> st;
        string ans = "";
        for(int i = s.size() - 1;i >= 0;i--){
            if(s[i] == ' '){
                if(st.empty()) continue;
                else {
                    string temp = "";
                    while(!st.empty()){
                        temp += st.top();
                        st.pop();
                    }
                    ans += temp + " ";
                }
            }else{
                st.push(s[i]);
            }
        }
        string temp = "";
        while(!st.empty()){
            temp += st.top();
            st.pop();
        }
        string final_answer = ans + temp;
        if(final_answer[final_answer.size() - 1] == ' '){
            string ans(begin(final_answer), end(final_answer) - 1);
            return ans;
        }
        return ans + temp;
    }
};