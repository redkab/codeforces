#include<bits/stdc++.h>
using namespace std;

bool needMoney(string str, int s, int k)
{
    int e = s + k-1;
    for(int i=s; i<=e; i++)
    {
        if(str[i] == '0')return 0;
    }
    return 1;
}
void solve(int n, int k, string s)
{
    int numFarms = n/k;
    int c=0;
    for(int i=0; i<numFarms; i++)
    {
        if(needMoney(s, k*i, k))c++;
    }
    cout<<c<<'\n';
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        solve(n, k, s);
    }
}
