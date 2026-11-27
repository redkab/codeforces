#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 void solve(vector<long long int>&v, long long k, long long int p)
{
    long long sum=0;
    sort(v.begin(), v.end());
    int n = v.size();
    long long fresh=0;
    for(long long x:v)fresh+=x;
    long long ans = fresh;
    long long mj=n/k;
    vector<long long>sums(n);
    for(int i=0; i<n; i++)
    {
        sum+=v[i];
        sums[i] = sum;
    }

    for(int i=1; i<=mj; i++)
    {
        long long rem = sums[i*k-1];
        long long curr = fresh;
        curr -= rem;
        curr +=p*(i);
        ans = max(ans, curr);
    }
    cout<<ans<<'\n';
} 

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long  n, k, p;
        cin>>n>>k>>p;
        vector<long long>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        solve(v, k, p);
    }
}


