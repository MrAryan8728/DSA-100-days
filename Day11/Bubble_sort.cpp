#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // Your code here
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}