#include<iostream>
using namespace std;

void solve(long long x)
{
    if(x%2)
    {
        cout<<"Yes\n";
        return;
    }
    if(x%4==0)
    {
        cout<<"Yes\n";
        return;
    }
    cout<<"No\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin>>x;
        solve(x);
    }
}
