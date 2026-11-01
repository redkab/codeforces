#include<iostream>
using namespace std;

void solve(long long a, long long b, long long c, long long d)
{
    long long dy = d-b;
    if(dy<0)
    {
        cout<<"NO\n";
        return;
    }
    if(c>a+dy)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c, d;
        cin>>a>>b>>c>>d;
        solve(a, b, c, d);
    }
}
