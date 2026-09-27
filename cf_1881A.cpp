#include<bits/stdc++.h>
using namespace std;

int search(string need, string hay, int start)
{
    int i = start, j=0;
    int c=0;
    while(j<hay.length())
    {
        if(need[i] != hay[j])return -1;
        j++;
        if(i==need.length()-1)
        {
            i=0;
            c++;
        }
        else i++;
    }
    return c;
}

void solve(string x, string s)
{
    vector<int>starts;
    for(int i=0; i<x.length(); i++)
    {
        if(x[i] == s[0])starts.push_back(i);
    }
    int min = INT_MAX;
    for(int num : starts)
    {
        int k = search(x, s, num);
        if(k<min)min=k;
    }
    if(min==-1)
    {
        cout<<"-1\n";
        return;
    }
    int targ = x.length() * (min+1);
    int l = x.length(), c=0;
    while(l<targ)
    {
        l*=2;
        c++;
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
