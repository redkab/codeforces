#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<climits>
using namespace std;

vector<vector<long long>>dp;

long long f(int i, int j, vector<long long>&eve, vector<long long>&odd)
{
    if(dp[i][j] != LLONG_MAX)return dp[i][j];
    if(i==0 && j==0)return dp[i][j] = 0;
    int n = dp.size() + dp[0].size();
    if (n%2 == (i+j)%2)
    {
    long long best = LLONG_MIN;
    if (i > 0) best = max(best, f(i - 1, j, eve, odd) + eve[i - 1]);
    if (j > 0) best = max(best, f(i, j - 1, eve, odd));
    return dp[i][j] = best;
    } 
    else 
    {
    long long best = LLONG_MAX;
    if (i > 0) best = min(best, f(i - 1, j, eve, odd));
    if (j > 0) best = min(best, f(i, j - 1, eve, odd) - odd[j - 1]);
    return dp[i][j] = best;
    }
}

void solve(vector<long long>&odd, vector<long long>&even)
{
    int e = even.size(), o = odd.size();
    f(e, 0, even, odd);
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
        vector<long long >even, odd;
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
        dp.assign(e+1, vector<long long>(o+1, LLONG_MAX));
        solve(odd, even);
    }
}


