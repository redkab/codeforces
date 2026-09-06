#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&v)
{
    int n =  v.size();
    vector<int>x;
    sort(v.begin(), v.end());
    int f=0, b=n-1;
    while(f<=b)
    {
        if(f==b)
        {
            x.push_back(v[f]);
            break;
        }
        x.push_back(v[f++]);
        x.push_back(v[b--]);
    }
    int s = x[0] + x[1];
    for(int i=1; i<n-1; i++)
    {
        if(x[i] + x[i+1] != s)
        {
            cout<<"NO\n";
            return;
        }
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
