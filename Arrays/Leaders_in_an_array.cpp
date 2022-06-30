// Problem url : https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    vector<int> leaders;
    int currentLeader = a[n-1]; // last element is always a leader
    leaders.push_back(currentLeader); 
    for(int i=n-2;i>=0;--i){
        if(a[i]>=currentLeader){
            currentLeader=a[i];
            leaders.push_back(currentLeader);
        }
    }
    reverse(leaders.begin(),leaders.end());
    for(int i=0;i<leaders.size();++i){
        cout<<leaders[i]<<" ";
    }
}