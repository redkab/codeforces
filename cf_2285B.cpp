#include<iostream>
#include<vector>
using namespace std;

void solve(string &s, int k)
{
    int n = s.length();
    int oc=0, zc=0;
    for(char c:s)
    {
        if(c=='1')oc++;
    }
    zc = n-oc;
    int big = max(oc, zc);
    int small = min(oc, zc);
    int inc = min(small, k);
    big += inc;
    small -= inc;
    cout<< 1 + (big*(big+1))/2 + (small*(small+1))/2<<'\n';
}
    
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        solve(s, k);
    }
}
