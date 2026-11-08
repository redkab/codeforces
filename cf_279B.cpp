#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int>&v, int f)
{
    int sum=0, ans=0;
    int r=0, l=0;
    int n = v.size();
    for(int r=0; r<n; r++)
    {
        sum += v[r];
        while(sum > f)
        {
            sum -= v[l];
            l++;
        }
        ans = max(ans, r-l+1);
    }
    cout<<ans<<endl;




}

int main()
{
    int n, f;
    cin>>n>>f;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    solve(v, f);
}
