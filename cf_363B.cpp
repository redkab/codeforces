#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int>&v, int k)
{
    int ans = 1e9;
    int sum=0, ind=0;
    int n = v.size();
    int f=0, b=k-1;
    for(int i=0; i<k; i++)sum += v[i];
    while(b<n)
    {
        if(sum < ans)
        {
            ind = f;
            ans = sum;
        }
        if(b==n-1)break;
        sum -= v[f];
        sum += v[b+1];
        f++;
        b++;
    }
    cout<<ind+1<<endl;
}

int main()
{
    int n, k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    solve(v, k);
}

