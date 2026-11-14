#include<iostream>
using namespace std;

void solve(int a, int b)
{
    if(a<=b)
    {
        cout<<-1<<'\n';
        return;
    }
    cout<<min(b, a-b)<<'\n';
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        solve(a, b);
    }
}
