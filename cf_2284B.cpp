#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int>&v, int k)
{
    vector<int>ans;
    for(int i=k+1; i<v.size(); i++)
    {
        ans.push_back(v[i]);
    }
    for(int i=k; i>=0; i--)
    {
        ans.push_back(v[i]);
    }
    int m = v[v.size()-1];
    int c = count(v.begin(), v.end(), m);
    if(c>k)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    for(int n : ans)
    {
        cout<<n<<' ';
    }
    cout<<'\n';
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        solve(v, k);
    }
}
