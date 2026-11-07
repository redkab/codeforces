#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int>&v, int k)
{
    int m = v[v.size()-1];
    int c = count(v.begin(), v.end(), m);
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin()+k);
    if(c>k)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    for(int n : v)
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
