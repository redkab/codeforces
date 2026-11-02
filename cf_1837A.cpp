#include<iostream>
using namespace std;

void solve(int x, int k)
{
    if(x%k)
    {
        cout<<1<<'\n';
        cout<<x<<'\n';
        return;
    }
    cout<<2<<'\n';
    cout<<x-1<<' '<<1<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, k;
        cin>>x>>k;
        solve(x, k);
    }
}
