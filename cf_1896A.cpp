#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&v)
{
    int n = v.size();
    if(v[0] != 1)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        solve(v);
    }
}
