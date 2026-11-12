#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(int a, int b, int c)
{
    vector<int>v(3);
    v[0] = a;
    v[1] = b;
    v[2] = c;
    sort(v.begin(), v.end());
    for(int i=0; i<2; i++)
    {
        if(v[i+1] - v[i] != 1)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
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
