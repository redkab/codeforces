#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(string &p, string &q)
{
    vector<int>fp(26, 0), fq(26, 0);
    for(char c:p)fp[c-'a']++;
    for(char c:q)fq[c-'a']++;
    for(int i=0; i<26; i++)
    {
        if(fp[i] < fq[i])
        {
            cout<<"NO\n";
            return;
        }
        else
        {
            fp[i] -= fq[i];
        }
    }
    for(int i=0; i<26; i++)
    {
        if(!(i=='s'-'a' || i== 'i'-'a' || i=='x'-'a'))
        {
            if(fp[i])
            {
                cout<<"NO\n";
                return;
            }
        }
    }
    if(fp['s'-'a'] == 1 && fp['i' - 'a'] == 1 && fp['x' - 'a'] == 1)cout<<"YES\n";
    else cout<<"NO\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m, n;
        cin>>n>>m;
        string p, q;
        cin>>p;
        cin>>q;
        solve(p, q);
        }
}
