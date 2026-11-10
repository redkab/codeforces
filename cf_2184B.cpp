#include<iostream>
using namespace std;

void solve(int s, int k, int m)
{
    int rem = m%k, iter = m/k;
    int cap;

    if(iter%2==0)
    {
        cap = s;
    }
    else cap = min(s, k);
    if(cap-rem>0)
    {
        cout<<cap-rem<<'\n';
        return;
    }
    cout<<0<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s, k, m;
        cin>>s>>k>>m;
        solve(s, k, m);
    }
}
