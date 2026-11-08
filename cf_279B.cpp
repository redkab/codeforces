#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int>&v, int f)
{
    int sum=0; 
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
    {
        if(sum + v[i] < f)sum += v[i];
        else 
        {
            cout<<i<<'\n';
            return;
        }
    }
}

int main()
{
    int n, f;
    cin>>n>>f;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    solve(v, f);
}
