#include<bits/stdc++.h>
using namespace std;

void solve(long long n, long long k, long long x)
{
    long long minSum = (k*(k+1))/2;
    long long maxSum = (k*(2*n + 1 - k))/2;
    if(minSum <= x && x <= maxSum)cout<<"YES\n";
    else cout<<"NO\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n, k, x;
        cin>>n>>k>>x;
        solve(n, k, x);
    }
}
