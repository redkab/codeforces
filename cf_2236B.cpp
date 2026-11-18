#include<iostream>
#include<string>
using namespace std;

void solve(string &s, int k)
{
    int n = s.length();
    for(int i=0; i<n-k; i++)
    {
        if(s[i] == '1' && s[i+k] == '1')
        {
            s[i] = '0';
            s[i+k] = '0';
        }
    }
    for(char c:s)
    {
        if(c=='1')
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        solve(s, k);
    }
}
