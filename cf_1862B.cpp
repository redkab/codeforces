#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&v)
{
    cout<<v[0]<<' ';
    int n = v.size();
    for(int i=1; i<n; i++)
    {
        if(v[i-1] <= v[i])cout<<v[i]<<' ';
        else cout<<v[i]<<' '<<v[i]<<' ';
    }
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
