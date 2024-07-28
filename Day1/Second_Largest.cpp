#include <bits/stdc++.h>
using namespace std;

int print2largest(vector<int> &arr){
    int first = -1;
    int second = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second and arr[i] < first)
        {
            second = arr[i];
        }
        else
        {
            continue;
        }
    }

    return (first != second) ? second : -1;
}