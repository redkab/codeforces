#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

vector<vector<int>>dp;

int f(int i, int j, vector<int>&eve, vector<int>&odd)
{
    if(dp[i][j] != -1)return dp[i][j];
    int n = dp.size() + dp[0].size();

    if(n%2 == (i+j)%2)
    {
        return dp[i][j] = max(f(i-1, j, eve, odd) + eve[i-1], f(i, j-1, eve, odd));
    }
    else return dp[i][j] = max(f(i-1, j, eve, odd), f(i, j-1, eve, odd) + odd[j-1]);
}

void solve(vector<int>&odd, vector<int>&even)
{
    int e = even.size(), o = odd.size();
    for(int i=0; i<=e; i++)
    {
        for(int j=0; j<=o; j++)
        {
            if(dp[i][j] == -1)dp[i][j] = f(i, j, even, odd);
        }
    }
    if(dp[0][0] >0)cout<<"Alice\n";
    else if(dp[0][0] == 0)cout<<"Tie\n";
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
        vector<int>even, odd;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x%2)odd.push_back(x);
            else even.push_back(x);
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        int e = even.size(), o = odd.size();
        dp.assign(e+1, vector<int>(o+1, -1));
        solve(odd, even);
    }
}


