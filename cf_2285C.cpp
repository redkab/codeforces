#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;

ll power(ll base, ll exp, ll m)
{
    ll ans =1;
    if(m==1)return 0;
    base %= m;
    while(exp)
    {
        if(exp&1)ans = (ans*base)%m;
        base = (base*base)%m;
        exp>>=1;
    }
    return ans;
}
void solve(vector<ll>&v)
{
    int n = v.size();
    sort(v.rbegin(), v.rend());

    ll ans = 1;
    ll m = 1e9 + 7;
    for(int i=0; i<n; i++)
    {
        if(i!= n-1 && v[i] == v[i+1])break;
        ll x = power(v[i]-1, i+1, m);
        ans = (ans + x)%m;
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
        int n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        solve(v);
    }
}
