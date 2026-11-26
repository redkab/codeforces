#include<iostream>
#include<vector>
using namespace std;

void solve(vector<long long int>&v, long long int k, int q)
{
    long long ans=0;
    vector<long long>counts;
    int c=0;
    int n = v.size();
    for(int i=0; i<n; i++)
    {
        if(v[i] > q)
        {
            if(c>0)counts.push_back(c);
            c=0;
        }
        else
        {
            c++;
        }
    }
    if(c)counts.push_back(c);
    //for(int c: counts)cout<<c<<' ';
    //cout<<'\n';
    for(int c : counts)
    {
        if(c >=k)
        {
            long long ways = ((c-k+2)*(c-k+1))/2;
            ans += ways;
        }
    }
    cout<<ans<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, q;
        cin>>n>>k>>q;
        vector<long long int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        solve(v, k, q);
    }
}
