#include<iostream>
#include<vector>
using namespace std;

vector<int>numCounts(vector<int>&v)
{
    int n = v.size();
    vector<int>counts(2*n + 1, 0);
    int currNum = v[0];
    int currC=1;
    counts[currNum]=1;

    for(int i=1; i<n; i++)
    {
        if(v[i] == currNum)
        {
            currC++;
        }
        else
        {
            counts[currNum] = max(counts[currNum], currC);
            currC=1;
            currNum = v[i];
        }
    }
    counts[currNum] = max(counts[currNum], currC);
    return counts;
}

void solve(vector<int>&a, vector<int>&b)
{
    int n = a.size();
    vector<int>ac = numCounts(a);
    vector<int>bc = numCounts(b);
    int num, maxi=0;
    int m = ac.size();
    for(int i=1; i<m; i++)
    {
        maxi = max(maxi, ac[i] + bc[i]);
    }
    cout<<maxi<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n), b(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        solve(a, b);
    }
}
