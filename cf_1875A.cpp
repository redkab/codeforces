#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve(vector<int>&v, int a, int b)
{
    int n = v.size();
    long long int ex= (long long)b;
    for(int i=0; i<n; i++)
    {
        ex += (long long)min(a-1, v[i]) ;
    }
    cout<<ex<<endl;
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, n;
        cin>>a>>b>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        solve(v, a, b);
    }
}
