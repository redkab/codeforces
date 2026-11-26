#include<iostream>
#include<string>
using namespace std;

void solve(string &s)
{
    int n = s.length();
    int i=0;

    int t=1;

    while(i<n)
    {
        if(t%2==1)
        {
            i++;
            t++;
            continue;
        }
        else
        {
            if(i==n-1)
            {
                cout<<"NO\n";
                return;
            }
            if(s[i] != s[i+1])
            {
                cout<<"NO\n";
                return;
            }
            i+=2;
            t++;
        }
    }
    cout<<"YES\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        solve(s);
    }
}

