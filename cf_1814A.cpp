#include<iostream>
using namespace std;

void solve(int n, int k)
{
    if(n%2==0)
    {
        cout<<"YES\n";
        return;
    }
    if(n-k < 0)
    {
        cout<<"NO\n";
        return;
    }
    if(k%2==0)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    return;
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        solve(n, k);
    }
}
