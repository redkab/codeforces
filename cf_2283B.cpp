#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int>&v)
{
    int b=0, k=0;

    for(int n : v)
    {
        k=0;
        for(int d:v)
        {
            if(d%n==0)k++;
        }
        b = max(k, b);
    }
    cout<<v.size()-b<<endl;
}

int main()
{
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
