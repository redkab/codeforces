#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&v)
{
    
    int n = v.size();
    vector<int>a;
    a.push_back(v[0]);
    for(int i=1; i<n; i++)
    {
        if(v[i-1] <= v[i])a.push_back(v[i]);
        else 
        {
            a.push_back(v[i]);
            a.push_back(v[i]);
        }
    }
    cout<<a.size()<<'\n';
    for(int i=0; i<a.size(); i++)cout<<a[i]<<' ';
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
