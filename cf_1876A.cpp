#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
typedef long long ll;

void solve(vector<pair<ll, ll>>&v, ll p)
{
    ll n = v.size();
    ll theo = p*n;
    ll cost=0;
    sort(v.begin(), v.end());
    int del=0;
    del++;
    cost += p;
    for(int i=0; i<n; i++)
    {
        if(v[i].first >p)
        {
            cost += (n-del)*p;
            break;
        }
        int x = min(n-del, v[i].second);
        cost += v[i].first * x;
        del += x;
        if(del==n)break;
    }

    cout<<min(cost, theo)<<'\n';


}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n, p;
        cin>>n>>p;
        vector<pair<ll, ll>>v(n);
        for(int i=0; i<n; i++)cin>>v[i].second;
        for(int i=0; i<n; i++)cin>>v[i].first;
        solve(v, p);
    }
}
