#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&v)
{
    int n =  v.size();
    map<int, int>m;
    for(int i=0; i<n; i++)m[v[i]]++;
    if(m.size()>2)
    {
        cout<<"NO\n";
        return;
    }
    if(m.size()==1)
    {
        cout<<"YES\n";
        return;
    }
    vector<int>x;
    for(auto &[a, b] : m)
    {
        x.push_back(b);
    }
    if(abs(x[0] - x[1]) > 1)
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
