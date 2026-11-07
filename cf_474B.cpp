#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&v, vector<int>&q, int sum)
{
    vector<int>h(sum+1, -1);
    int k=1;
    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v[i]; j++)
        {
            h[k++] = i+1;
        }
    }
    for(int i=0; i<q.size(); i++)
    {
        cout<<h[q[i]]<<'\n';
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum += v[i];
    }
    int q;
    cin>>q;
    vector<int>a(q);
    for(int i=0; i<q; i++)cin>>a[i];
    solve(v, a, sum);
}
