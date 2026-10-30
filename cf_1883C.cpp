#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void solve(vector<int>&v, int k)
{

    int n = v.size();
    int del;
    int ec=0;
    int minOps = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(v[i]%2==0)ec++;
        if(v[i]%k==0)
        {
            cout<<'0'<<endl;
            return;
        }
        int rem = v[i] % k;
        int ops = k-rem;
        if(ops<minOps)minOps = ops;
    }
    if(k!=4)
    {
        cout<<minOps<<endl;
        return;
    }

    int altOps;
    if(ec>=2)
    {
        cout<<0<<endl;
        return;
    }
    if(ec==1)
    {
        cout<<1<<endl;
        return;
    }
    if(n-ec<2)
    {
        cout<<minOps<<endl;
        return;
    }
    altOps = 2;
    cout<<min(minOps, altOps)<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        solve(v, k);
    }
}
