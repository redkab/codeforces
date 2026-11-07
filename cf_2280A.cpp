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
    int ae = n-ao, be = n-bo;
    int ee = min(ae, be);
    int oo = min(ao, bo);
    int eo = bo-oo;
    int oe = be-ee;
    if(k%2==1)
    {
        if(oe>0)
        {
            cout<<"NO\n";
            return;
        }
    }
    if(k%2==0)
    {
        if(eo>0)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";

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
