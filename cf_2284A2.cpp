#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void solve(vector<int>&v)
{
    int n = v.size();
    long long int x=0, y=0;
    vector<int>f(25, 0);
    for(int i=0; i<n; i++)f[v[i]]++;
    
    for(int i=24; i>=0; i--)
    {
        long long inc = 1<<i;
        for(int j=0; j<f[i]; j++)
        {
            if(x>y)y+=inc;
            else x+= inc;
        }
    }

    cout<<x*y<<endl;
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
