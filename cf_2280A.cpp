#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&a, vector<int>&b, int k)
{
    int ao=0, bo=0;
    int n = a.size();
    for(int i=0; i<n; i++)
    {
        if(a[i]%2)ao++;
        if(b[i]%2)bo++;
    }
    if(k%2==0)
    {
        if(ao>=bo)
        {
            cout<<"YEs\n";
            return;
        }
        else cout<<"NO\n";
    }
    int ae = n-ao, be = n-bo;
    if(ae >= be)
    {
        cout<<"Yes\n";
        return;
    }
    else cout<<"No\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        vector<int>a(n), b(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        solve(a, b, k);
    }
}
