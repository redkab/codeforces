#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&v)
{
    int n = v.size();
    int max=0, curr=0;
    for(int i=0; i<n; i++)
    {
        if(v[i] == 0)
        {
            curr++;
            if(curr>max)max=curr;
        }
        else
        {
            curr=0;
        }
    }
    cout<<max<<'\n';
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
