#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

void solve(int s, vector<pair<int ,int>>&v)
{
    sort(v.begin(), v.end());
    int n = v.size();
    int curr=s;
    for(int i=0; i<n; i++)
    {
        if(curr <= v[i].first)
        {
            cout<<"NO\n";
            return;
        }
        curr += v[i].second;
    }
    cout<<"YES\n";
}
int main()
{
    int s, n;
    cin>>s>>n;
    vector<pair<int, int>>v(n);
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin>>a>>b;
        v[i] = {a, b};
    }
    solve(s, v);
}
