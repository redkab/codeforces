#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&v)
{
    int tc=0;
    int n = v.size();
    vector<int>t(n, 0);
    for(int i=0; i<n; i++)
    {
        if(v[i] == 2)tc++;
        t[i] = tc;
    }
    for(int i=0; i<n; i++)
    {
        if(t[i] == tc - t[i])
        {
            cout<<i+1<<'\n';
            return;
        }
    }
    cout<<-1<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
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
