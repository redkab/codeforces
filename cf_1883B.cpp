#include<bits/stdc++.h>
using namespace std;

void solve(string s, int k)
{
    vector<int>v(26, 0);
    for(char c: s)v[c-'a']++;
    int o=0;
    for(int n : v)if(n%2)o++;
    if(k<o-1)
    {
        cout<<"NO\n";
        return;
    }
    if(k==o)
    {
        cout<<"YES\n";
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
        string s;
        int n, k;
        cin>>n>>k;
        cin>>s;
        solve(s, k);
    }
}
