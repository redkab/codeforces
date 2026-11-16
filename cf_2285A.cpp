#include<iostream>
#include<vector>
using namespace std;

void solve(int n)
{
    if(n<=3)
    {
        cout<<-1<<'\n';
        return;
    }
    for(int i=n-2; i<=n; i++)cout<<i<<' ';
    for(int i=1; i<n-2; i++)cout<<i<<' ';
    cout<<'\n';

}
int main()
{
    ios_base::sync_with_stdio(false);
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
