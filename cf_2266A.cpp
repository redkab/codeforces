#include<iostream>
#include<algorithm>
using namespace std;

void solve(int a, int b, int c, int n)
{
    cout<<max({n-a, n-b, n-c})<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a, b, c;
        cin>>a>>b>>c;
        solve(a, b, c, n);
    }
}
