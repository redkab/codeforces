#include<bits/stdc++.h>
using namespace std;

bool nonDec(vector<int>&v)
{
    int n = v.size();
    for(int i=0; i<n-1; i++)
    {
        if(v[i] > v[i+1])return 0;
    }
    return 1;
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
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        if(nonDec(v))cout<<"YES\n";

        else if(k>1)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
