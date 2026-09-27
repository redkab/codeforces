#include<bits/stdc++.h>
using namespace std;

void solve(string x, string s)
{
    int ans=0;
    while(x.length() < s.length())
    {
        x += x;
        ans++;
    }
    if(x.find(s)!=string::npos)
    {
        cout<<ans<<'\n';
        return;
    }
    x+=x;
    ans++;
    if(x.find(s)!=string::npos)
    {
        cout<<ans<<'\n';
        return;
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
