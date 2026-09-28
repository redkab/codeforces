#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int>&v)
{
    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i] > v[i+1])return 0;
    }
    return 1;
}

void solve(vector<int>&v)
{
    int min = 2147483647;
    int n = v.size();
    if(!isSorted(v))
    {
        cout<<"0\n";
        return;
    }
    for(int i=0; i<n-1; i++)
    {
        int d = v[i+1] - v[i];
        int ops;
        ops = d/2 + 1;
        if(ops<min)min = ops;
    }
    cout<<min<<'\n';
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
