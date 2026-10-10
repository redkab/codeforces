#include<iostream>
using namespace std;

void solve(int a, int b)
{
    if(a<b-1)
    {
        cout<<"-1\n";
        return;
    }
    if(a == b || a+1 == b)
    {
        cout<<b<<'\n';
        return;
    }
    int d = a-b;
    int j;
    if(d%2==0)j=d;
    else j = d+1;
    cout<<b+j<<'\n';
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        solve(a, b);
    }
}
