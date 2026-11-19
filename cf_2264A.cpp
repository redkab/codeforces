#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int>&v)
{
    vector<int>pos, ele;
    int n = v.size()-1;
    for(int i=1; i<=n; i++)
    {
        if(i!= v[i])
        {
            pos.push_back(i);
            ele.push_back(v[i]);
        }
    }
    reverse(ele.begin(), ele.end());
    for(int i=0; i<ele.size(); i++)
    {
        if(ele[i] != pos[i])
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n+1);
        for(int i=1; i<=n; i++)cin>>v[i];
        solve(v);
    }
}
