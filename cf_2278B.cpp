#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void solve(int r, int s, int p)
{
    int m = max({r, s, p});
    char c;
    if(m==r)c = 'P';
    else if(m==s)c = 'R';
    else c = 'S';
    string ans;
    for(int i=0; i<r+s+p; i++)
    {
        ans.push_back(c);
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, z;
        cin>>x>>y>>z;
        solve(x, y, z);
    }
}
