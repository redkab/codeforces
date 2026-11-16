#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&v)
{
    int n = v.size();
    int pc = 2, con = 0;
    for(int i=0; i<n; i++)
    {
        pc *= -1;
        con = 2*v[i] - con;
    }
    cout<<-con/pc<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
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
