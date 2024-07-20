#include<iostream>
using namespace std;

int findEquilibrium(int A[], int n){
  //Your code here
//   int left[n];
//   int right[n];
//   left[0] = A[0];
//   right[n - 1] = A[n - 1];
//   for(int i = 1;i < n;i++){
//       left[i] = A[i] + left[i - 1]; 
//   }
//   for(int i = n - 2;i >= 0;i--){
//       right[i] = A[i] + right[i + 1];
//   }
//   for(int i = 0;i < n;i++){
//       if(left[i] == right[i]) return i;
//   }
//   return -1;

    int sumTotal = 0;
    for(int i = 0;i < n;i++) sumTotal += A[i];
    int sumCurrent = A[0];
    for(int i = 1;i < n;i++){
        if(sumCurrent == (sumTotal - sumCurrent - A[i])){
            return i;
        }
        sumCurrent += A[i];
    }
    return -1;
}