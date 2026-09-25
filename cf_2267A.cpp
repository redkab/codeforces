#include<iostream>
using namespace std;


void solve(string s, char c)
{
    int n = s.length();
    int f=0, b=n-1;
    int count=0;

    while(f<b)
    {
        if(s[f] != s[b])
        {
            if(s[f] == c || s[b] == c)count += 1;
            else count += 2;
        }
        f++;
        b--;
    }
    cout<<count<<'\n';
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        solve(s, c);
    }
}
