#include<iostream>
using namespace std;

void solve(int n)
{
    int ops = (n*n)/4;
    cout<<ops<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        solve(n);
    }
}
