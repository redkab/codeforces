#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int>&v)
{
    int big = *max_element(v.begin(), v.end());
    int small = *min_element(v.begin(), v.end());
    cout<<big-small+1<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        solve(v);
    }
}
