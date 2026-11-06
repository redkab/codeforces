#include<iostream>
using namespace std;

void solve(int l, int r)
{
    if(l==r)
    {
        cout<<0<<endl;
        return;
    }

    if(l<0 && r>0)
    {
        int x = min(abs(l), abs(r));

        cout<<max(0, r-l-2*x-1)<<endl;
        return;
    }
    cout<<r-l<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l, r;
        cin>>l>>r;
        solve(l, r);
    }
}
