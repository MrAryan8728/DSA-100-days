#include<bits/stdc++.h>
using namespace std;

int makeBeautiful(string str) {
  int n = str.size();
  string beauty1 = "0", beauty2 = "1";
  int start1 = 0, start2 = 1;
  for (int i = 1; i < n; i++) {
    beauty1 += to_string(!start1);
    start1 = !start1;
    beauty2 += to_string(!start2);
    start2 = !start2;
  }

  int diff1 = 0, diff2 = 0;
  for (int i = 0; i < n; i++) {
    if (str[i] != beauty1[i]) diff1++;
    if (str[i] != beauty2[i]) diff2++;
  }
//   cout<<beauty1<<"  "<<beauty2<<"   ";
  return min(diff1, diff2);
}