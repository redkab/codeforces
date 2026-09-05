#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&v)
{
    int n = v.size();
    int start = -1, end = -1;
    for(int i=0; i<n; i++)
    {
        if(v[i] == 1 || v[i] == -1)
        {
            start = i;
            v[i] = 1;
            break;
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        if(v[i] == 1 || v[i] == -1)
        {
            end = i;
            v[i] = 1;
            break;
        }
    }
    for(int i=start; i<end; i++)
    {
        if(v[i] == -1)v[i] = 0;
    }
    for(int n : v)cout<<n<<' ';
    cout<<'\n';
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
