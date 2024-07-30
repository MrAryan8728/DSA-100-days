#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    int f = 0, l = n - 1, k = 0;
    while (k <= l)
    {
        if (a[k] == 0)
        {
            swap(a[f++], a[k++]);
        }
        else if (a[k] == 1)
        {
            k++;
        }
        else
        {
            swap(a[k], a[l--]);
        }
    }
}