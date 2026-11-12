#include<iostream>
#include<string>
#include<map>
using namespace std;

void solve(string &s)
{
    map<char, char>m;
    m['R'] = 'B';
    m['B'] = 'R';

    char c = 'R';
    int n = s.length();
    int swap=0;

    for(int i=0; i<n; i++)
    {
        if(s[i] != c)
        {
            swap++;
            c = m[c];
        }
        c = m[c];
    }
    cout<<swap<<'\n';
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
