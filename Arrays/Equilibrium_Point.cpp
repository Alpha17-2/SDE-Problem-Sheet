// Problem url : https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int prefixArray[n], suffixArray[n];
    prefixArray[0] = a[0];
    suffixArray[n - 1] = a[n - 1];
    for (int i = 1, j = n - 2; i < n; ++i, --j)
    {
        prefixArray[i] = prefixArray[i - 1] + a[i];
        suffixArray[j] = suffixArray[j + 1] + a[j];
    }
    int foundIndex = -1;
    for (int i = 0; i < n; i++)
    {
        if (prefixArray[i] == suffixArray[i])
        {
            foundIndex = i + 1;
            break;
        }
    }
    cout << foundIndex;
}