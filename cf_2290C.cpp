#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void solve(vector<int>&v)
{
    sort(v.begin(), v.end());
    int max_ind;
    int n = v.size();
    vector<int>a, b;
    for(int i=0; i<n; i++)
    {
        if(i%2)
        {
            b.push_back(v[i]);
        }
        else a.push_back(v[i]);
    }
    for(int i = b.size()-1; i>=0; i--)a.push_back(b[i]);
    int curr_max = 0, count=0;
    for(int i=0; i<n; i++)
    {
        if(a[i] > curr_max)
        {
            count++;
            curr_max = a[i];
            max_ind = i;
        }
    }
    int cm = 0;
    for(int i=n-1; i>max_ind; i--)
    {
        if(a[i] > cm)
        {
            count++;
            cm = a[i];
        }
    }
    cout<<count<<'\n';
    for(int x : a)cout<<x<<' ';
    cout<<'\n';
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
