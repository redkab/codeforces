#include<iostream>
#include<string>
using namespace std;

void solve(string &s, int k)
{
    int n = s.length();
    for(int i=0; i<k; i++)
    {
        int c=0;
        for(int j=i; j<n; j+=k)
        {
            if(s[j] == '1')c++;
        }
        if(c%2)
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
