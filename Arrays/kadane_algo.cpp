// Problem url : https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/0/

#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(int a[], int n)
{

    int best = a[0], sum = a[0];
    for (int i = 1; i < n; i++)
    {
        sum = max(a[i], sum + a[i]);
        best = max(sum, best);
    }
    return best;
}
int main()
{
    int t, n;

    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {

        cin >> n; // input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; // inputting elements of array

        cout << maxSubarraySum(a, n) << endl;
    }
}