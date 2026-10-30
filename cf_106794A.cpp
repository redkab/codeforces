#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int>&v, int k)
{
    int mon=0;
    if(k==0)
    {
        cout<<0<<endl;
        return;
    }
    int n = v.size();
    int sum=0;
    int i=0;
    for(int i=0; i<n; i++)
    {
        sum += v[i];
        if(sum <= k)mon++;
        if(sum>k)break;
    }
    cout<<mon<<endl;
}
int main()
{
    int n, q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    sort(v.begin(), v.end());
    while(q--)
    {
        int k;
        cin>>k;
        solve(v, k);
    }
}
