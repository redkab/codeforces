#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&v)
{
    int n = v.size();
    int sum=0;
    int ec=0, oc=0;
    for(int i=0; i<n; i++)
    {
        sum += v[i];
        if(v[i]%2)oc++;
        else ec++;
    }

    if(sum%2)cout<<oc<<'\n';
    else cout<<ec<<'\n';
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    solve(v);
}
