#include<bits/stdc++.h>
using namespace std;

void solve(string x, string s)
{
    for(int i=0; i<=10; i++)
    {
        if(x.find(s) != string::npos)
        {
            cout<<i<<'\n';
            return;
        }
        x += x;
    }
    cout<<"-1\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        string x, s;
        cin>>x;
        cin>>s;
        solve(x, s);
    }
}
