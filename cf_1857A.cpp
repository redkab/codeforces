#include<iostream>
using namespace std;

void solve(int oc, int ec)
{
    if(oc+ec == 1)
    {
        cout<<"NO\n";
        return;
    }
    if(oc%2)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ec=0, oc=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x%2)oc++;
            else ec++;
        }
        solve(oc, ec);
    }
}
