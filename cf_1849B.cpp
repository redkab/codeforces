#include<queue>
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

struct pairComp
{
    bool operator()(const pair<int, int>&a, const pair<int, int>&b)
    {
        if(a.first != b.first)
        {
        return a.first > b.first;
        }
        return a.second < b.second;
    }
};

void solve(vector<int>&v, int k)
{
    int n = v.size();
    vector<pair<int, int>>r(n);
    for(int i=0; i<n; i++)
    {
        if(v[i]%k==0)r[i] = {k, i+1};
        else r[i] = {v[i]%k, i+1};
    }
    sort(r.begin(), r.end(), pairComp());
    for(int i=0; i<n; i++)
    {
        cout<<r[i].second<<' ';
    }
    cout<<'\n';
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        solve(v, k);
    }
}
