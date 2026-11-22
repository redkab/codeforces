#include<iostream>
#include<vector>
using namespace std;

void solve(string s, int x, int y)
{
    int ans = x+y;
    for(int i=0; i<s.length() && x+y ; i++)
    {
        if(s[i] == '+')
        {
            if(y>0)y++;
            else
            {
                x--;
                y++;
            }
        }
        else
        {
            if(y<=1)
            {
                if(x>0)
                {
                    x--;
                }
                else 
                {
                    x++;
                    y--;
                }
            }
            else
            {
                x++;
                y--;
            }
        }
        ans = max(ans, x+y);
    }
    cout<<ans<<'\n';
}


int  main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, m;
        string s;
        cin>>x>>y>>m;
        cin>>s;
        solve(s, x, y);
    }
}
