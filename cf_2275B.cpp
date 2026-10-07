#include<iostream>
#include<vector>
using namespace std;

void solve(int n, string s)
{
    vector<bool>p(n+1, 0);
    vector<int>mem;

    int l = s.length();
    int pc=0;
    for(int i=0; i<l; i++)
    {
        if(s[i] == '1')mem.push_back(i+1);
        else if(s[i] == '2')
        {
            if(mem.size() == 0)
            {
                p[i+1] = 1;
                pc++;
            }
            else 
            {
                p[mem.back()] = 1;
                mem.pop_back();
                pc++;
            }
        }
        else if(s[i] == '3')
        {
            p[i+1] = 1;
            pc++;
        }
    }
    cout<<n-pc<<'\n';
    for(int i=1; i<=n; i++)
    {
        if(!p[i])cout<<i<<' ';
    }
    cout<<'\n';
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
        solve(n, s);
    }
}
