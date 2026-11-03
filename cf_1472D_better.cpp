#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<long long>&v)
{
    sort(v.rbegin(), v.rend());
    long long ans=0;

    for(int i=0; i<v.size(); i++)
    {
        if(i%2 && v[i]%2)ans -= v[i];
        else if(!(i%2) && !(v[i]%2))ans += v[i];
    }
    if(ans>0)cout<<"Alice"<<endl;
    else if(ans == 0)cout<<"Tie\n";
    else cout<<"Bob\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        solve(v);
    }
}
