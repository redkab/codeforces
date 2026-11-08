#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int>&v)
{
    int n = v.size();
    vector<long long int>usum(n+1), ssum(n+1);
    long long int s=0;
    for(int i=1; i<=n; i++)
    {
        s+= v[i];
        usum[i] = s;
    }
    usum[0] = 0, ssum[0] = 0;
    sort(v.begin(), v.end());
    s=0;

    for(int i=1; i<=n; i++)
    {
        s += v[i];
        ssum[i] = s;
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int t, l, r;
        cin>>t>>l>>r;
        if(t==1)
        {
            cout<<usum[r] - usum[l-1]<<endl;
        }
        else cout<<ssum[r] - ssum[l-1]<<endl;
    }
}



int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    v[0] = 0;
    for(int i=1; i<=n; i++)cin>>v[i];
    solve(v);
}
