// Problem url : https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1#

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int MissingNumber(vector<int> &a, int n)
    {
        long long sum = 0;
        int i = 0;
        while (i < n - 1)
        {
            sum += a[i++];
        }
        return (n * (n + 1)) / 2 - sum;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}