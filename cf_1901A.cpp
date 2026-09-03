#include<bits/stdc++.h>
using namespace std;

int minCap(vector<int>&locs, int x)
{
    if(locs.size()==1)
    {
        return max(locs[0], 2*(x-locs[0]));
    }
    vector<int>diffs(locs.size()-1);
    for(int i=0; i<locs.size()-1; i++)
    {
        diffs[i] = locs[i+1] - locs[i];
    }
    int maxDiff = INT_MIN;
    for(int n : diffs)if(n>maxDiff)maxDiff=n;
    int ldiff = 2*(x-locs[locs.size()-1]);
    return max(maxDiff, ldiff);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        vector<int>locs(n+1);
        locs[0] = 0;
        for(int i=1; i<=n; i++)cin>>locs[i];
        cout<<minCap(locs, x)<<'\n';
    }
}
