#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&v)
{
    int n = v.size();
    int f=0, r=n-1;
    int al=0, bob=0;
    int ans=0, eat;
    while(f<=r)
    {
        if(al <= bob)
        {
            al += v[f];
           f++;
        }
        else
        {
           bob += v[r];
          r--;
        }

        if(al==bob)
        {
            eat = f + n-1-r;
            ans = max(ans, eat);
        }
    }
    cout<<ans<<endl;
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
