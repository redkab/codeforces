#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&v, int k)
{
    int n = v.size();
    if(n==k)
    {
        cout<<n<<'\n';
        return;
    }

    int l = n-k+1;
    int c=1, ans=0;
    for(int i=1; i<n; i++)
    {
        if(v[i] == v[i-1])c++;
        else c=1;
        if(c>=l)ans++;
    }
    cout<<ans<<'\n';

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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        solve(v, k);
    }
}
