#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(int a, int b, int c)
{
    int r=0;
    vector<int>v(3);
    v[0] = a, v[1] = b, v[2] = c;
    while(!(v[0] == v[1] || v[1] == v[2]|| v[2] == v[0]))
    {
        sort(v.begin(), v.end());
        v[2]--;
        v[0]++;
        r++;
    }
    cout<<r<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        solve(a, b, c);
    }
}
