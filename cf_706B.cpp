#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int ind(vector<int>&v, int k)
{
    int n = v.size();
    int l=0, r=n-1;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(v[mid]==k)return mid;
        else if(k < v[mid])r = mid-1;
        else l = mid+1;
    }
    return r;
}

void solve(vector<int>&v)
{
    sort(v.begin(), v.end());
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int c;
        cin>>c;
        cout<<ind(v, c) + 1<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    solve(v);
}
