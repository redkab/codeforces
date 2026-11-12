#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

void solve(string &s)
{
    vector<pair<int, int>>v;
    int n = s.length();
    int f=0, b=n-1;
    while(f<b)
    {
        if(s[f] != s[b])
        {
            int a = min(s[f], s[b]);
            int x = max(s[f], s[b]);
            v.push_back({a, x});
        }
        f++;
        b--;
    }
    if(v.size()==0)
    {
        cout<<0<<'\n';
        return;
    }
    sort(v.begin(), v.end());
    int cs=v[0].first, ce = v[0].second;
    int l = v.size();
    vector<pair<int, int>>ans;
    for(int i=1; i<l; i++)
    {
        int x = v[i].first, y = v[i].second;
        if(x > ce)
        {
            ans.push_back({cs, ce});
            cs = x;
            ce = y;
        }
        else if(y > ce)
        {
            ce = y;
        }
    }
    ans.push_back({cs, ce});
    int sum=0;
    for(int i=0; i<ans.size(); i++)
    {
        sum += abs(ans[i].first - ans[i].second);
    }
    cout<<sum<<'\n';   
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        solve(s);
    }
}
