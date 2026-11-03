#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int>&a, vector<int>&b, int k)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int n = a.size();
    int p=0, q=n-1;
    int i=0, sum=0;

    for(int x:a)sum+=x;

    while(a[p] < b[q] && i++ < k)
    {
        sum -= a[p];
        sum += b[q];
        p++;
        q--;
    }
    cout<<sum<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        vector<int>a(n), b(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        solve(a, b, k);
    }
}
