#include<iostream>
using namespace std;

void solve(long long n, long long t)
{
    long long time;
    if(n%2==0)
    {
        time = (n*(8*t + (n/2 - 1)*4*t))/4;
        cout<<time<<'\n';
        return;
    }
    time = (n+1)*(n+1)*t/2;
    cout<<time<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, t;
    cin>>n>>t;
    solve(n, t);
}

