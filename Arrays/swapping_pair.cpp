// Problem url : https://practice.geeksforgeeks.org/problems/swapping-pairs-make-sum-equal4142/1

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >>m;
    int s1=0,s2=0;
    vector<int> a(n),b(n);
    map<int,int> hashmap;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hashmap[a[i]]++;
        s1+=a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        s2+=b[i];
        
    }
    int diff = s1-s2;
    /*
            s1-a[i]+b[j] = s2-b[j]+a[i] // if true then proceed
            s1-s2 = a[i]+a[i]-b[j]-b[j]
            s1-s2 = 2(a[i]-b[j])
            s1-s2/2 = a[i]-b[j]
    */
    if(diff%2!=0) return -1;
    for(int i=0;i<n;++i){
        int target = diff/2 + b[i];
        if(hashmap[target]>0) return 1;
    }
    return -1;


}