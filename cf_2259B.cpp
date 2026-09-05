#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&v)
{
    int a=0, b=0, c=0;
    for(int n : v)
    {
        if(n%2)a++;
        else if((n/2)%2 == 0)b++;
        else c++;
    }
    cout<< max({a, b, c})<<'\n';

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
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        solve(v);
    }
}
