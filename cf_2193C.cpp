#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

vector<int>process(vector<pair<int, int>>&v)
{
    int n = v.size();
    vector<int>ans(n);
    sort(v.rbegin(), v.rend());
    int big=-1;
    for(int i=0; i<n; i++)
    {
        int ele = v[i].first;
        int ind = v[i].second;
        if(ind <=big)continue;
        for(int j=ind; j>big; j--)
        {
            ans[j] = ele;
        }
        big = ind;
    }
    return ans;
}

void solve(vector<pair<int, int>>&a, vector<pair<int, int>>&b, int q)
{
    vector<int>x = process(a);
    vector<int>y = process(b);
    int n = a.size();
    vector<int>fin(n);
    for(int i=0; i<n; i++)fin[i] = max(x[i], y[i]);
    vector<int>sum;
    sum.push_back(0);
    int s=0;
    for(int i=0; i<n; i++)
    {
        s += fin[i];
        sum.push_back(s);
    }
    for(int i=0; i<q; i++)
    {
        int l, r;
        cin>>l>>r;
        cout<<sum[r] - sum[l-1]<<' ';
    }
    cout<<'\n';
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, q;
        cin>>n>>q;
        vector<pair<int, int>>a(n), b(n);
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            a[i] = {x, i};
        }
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            b[i] = {x, i};
        }
        solve(a, b, q);
    }
}
