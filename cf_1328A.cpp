#include<iostream>
using namespace std;


void solve(int a, int b)
{
    if(a%b==0)
    {
        cout<<0<<'\n';
        return;
    }
    cout<<b - a%b<<'\n';
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
