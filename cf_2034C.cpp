#include<bits/stdc++.h>
using namespace std;
int dr[4] = {0, 0, -1, 1};
int dc[4] = {1, -1, 0, 0};

bool isTrapped(vector<vector<char>>&maze, int r, int c, vector<vector<int>>&dp)
{
    int n = maze.size();
    int m = maze[0].size();
    if(!(r>=0 && r<n && c>=0 && c<m))return 0;

    if(dp[r][c] != -1)return dp[r][c];

    dp[r][c] = 1;
    int nr=r, nc=c;
    if(maze[r][c] != '?')
    {
        char x = maze[r][c];

        if(x=='L')nc--;
        else if(x=='R')nc++;
        else if(x=='D')nr++;
        else nr--;
    return dp[r][c] = isTrapped(maze, nr, nc, dp);
    }
    bool tr = 0;
    for(int i=0; i<4; i++)
    {
        nr = r + dr[i];
        nc = c + dc[i];
        if(isTrapped(maze, nr, nc, dp))return dp[r][c] = 1;
    }
    return dp[r][c] = 0;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        vector<vector<char>>maze(n, vector<char>(m));
        vector<vector<int>>dp(n, vector<int>(m, -1));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>maze[i][j];
            }
        }

        int count=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(isTrapped(maze, i, j, dp))count++;
            }
        }
        cout<<count<<'\n';
    }
}




