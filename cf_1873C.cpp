#include<iostream>
#include<vector>
using namespace std;

void solve(vector<vector<char>>&g)
{
    int s=0;
    for(int l=0; l<5; l++)
    {
        for(int i=l; i<=9-l; i++)
        {
            if(g[l][i] == 'X')s += l+1;
            if(g[9-l][i] == 'X')s += l+1;
        }
        for(int i=l+1; i<9-l; i++)
        {
            if(g[i][l] == 'X')s+=l+1;
            if(g[i][9-l] == 'X')s+=l+1;
        }
    }
    cout<<s<<'\n';
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<vector<char>>v(10, vector<char>(10));
        for(int i=0; i<10; i++)
        {
            for(int j=0; j<10; j++)
            {
                cin>>v[i][j];
            }
        }
        solve(v);
    }
}
