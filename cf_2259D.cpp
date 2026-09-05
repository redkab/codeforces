#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&v)
{
    int n = v.size();
    vector<int>z;
    for(int i=0; i<n; i++)
    {
        if(v[i]==0)z.push_back(i);
    }
    if(z.size()==1)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    if(z.size()==0)
    {
        for(int i=0; i<n; i++)cout<<'A';
        cout<<'\n';
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(i == z[0])cout<<'A';
        else if(v[i] == 0)cout<<'B';
        else cout<<'C';
    }
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
