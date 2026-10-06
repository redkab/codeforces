#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&v)
{
    int n = v.size();
    int max = 1+n;
    for(int i=0; i<n; i++)
    {
        cout<<max-v[i]<<' ';
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
