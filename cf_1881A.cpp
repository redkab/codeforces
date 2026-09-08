#include<bits/stdc++.h>
using namespace std;

void solve(string x, string s)
{
    int i=0;
    vector<int>xf(26, 0), sf(26, 0);
    for(char c:x)xf[c-'a']++;
    for(char c:s)sf[c-'a']++;
    for(int i=0; i<26; i++)
    {
        if((sf[i] && !xf[i]))
        {
            cout<<"-1\n";
            return;
        }
    }
    int c=0;
    while(x.find(s) == string::npos && i++ <=15)
    {
        x += x;
        c++;
    }
    if(i==16)
    {
        cout<<"-1\n";
        return;
    }
    cout<<c<<'\n';
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
