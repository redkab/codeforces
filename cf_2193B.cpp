#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int>&v)
{
    int n = v.size();
    int l=-1, r;
    for(int i=0; i<n; i++)
    {
        if(i + v[i] != n)
        {
            l = i;
            break;
        }
    }
    if(l == -1)
    {
        for(int x:v)cout<<x<<' ';
        cout<<'\n';
        return;
    }

    int ele = n-l;
    for(int i=l+1; i<n; i++)
    {
        if(v[i] == ele)
        {
            r = i;
            break;
        }
    }
    reverse(v.begin() + l, v.begin() + r+1);
    for(int x:v)cout<<x<<' ';
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

