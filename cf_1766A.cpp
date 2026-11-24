#include<iostream>
using namespace std;
#include<cmath>
bool isRound(int x)
{
    int dc=0;
    int t = x;
    while(t)
    {
        dc++;
        t/=10;
    }
    int d = (int)pow(10, dc-1);
    return x%d == 0;
}

void solve(int n)
{
    int c=0;
    for(int i=1; i<=n; i++)
    {
        if(isRound(i))c++;
    }
    cout<<c<<'\n';
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
        solve(n);
    }
}
