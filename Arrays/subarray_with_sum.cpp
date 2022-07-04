// Problem url : https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

#include <bits/stdc++.h>
using namespace std;
vector<int> sol(vector<int> a, int n, int target)
{
    int currentIndex = 0;
    int sum = 0;
    int left = 0;

    while (currentIndex < n)
    {
        sum += a[currentIndex];

        while (sum > target && left < currentIndex)
        {
            sum -= a[left];
            left++;
        }
        if (sum == target)
        {
            return {left + 1, currentIndex + 1};
        }
        currentIndex++;
    }
    return {-1};
}
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> ans = sol(a, n, target);
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << " ";
    }
    return 0;
}