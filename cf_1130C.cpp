#include<bits/stdc++.h>
using namespace std;
int dist(pair<int, int>a, pair<int, int>b)
{
    return (a.first - b.first)*(a.first-b.first) + (a.second - b.second)*(a.second - b.second);
}

//bool isEdge(int r, int c);

vector<pair<int, int>>bfs(vector<vector<int>>&grid, vector<vector<bool>>&vis, int sr, int sc)
{
    int n = grid.size();
    queue<int>qr;
    queue<int>qc;
    qr.push(sr);
    qc.push(sc);
    int nr, nc, r, c;
    vis[sr][sc] = 1;
    int dr[4] = {0, 0, 1, -1};
    int dc[4] = {1, -1, 0, 0};
    vector<pair<int, int>>v;
    while(!qr.empty())
    {
        r = qr.front();
        c = qc.front();
        v.push_back({r, c});
        qr.pop();
        qc.pop();
        for(int i=0; i<4; i++)
        {
            nr = r + dr[i];
            nc = c + dc[i];
            if(nr>=0 && nr<n && nc>=0 && nc<n  &&grid[nr][nc] && !vis[nr][nc])
            {
                vis[nr][nc] = 1;
                qr.push(nr);
                qc.push(nc);
            }
        }
    }
    return v;
}

void printVec(vector<pair<int, int>>&v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<' '<<v[i].second<<'\n';
    }
}


int main()
{
    int n;
    cin>>n;
    vector<vector<int>>grid(n, vector<int>(n));
    vector<vector<bool>>vis(n, vector<bool>(n));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>grid[i][j];
        }
    }
    vector<pair<int, int>>p = bfs(grid,vis,0,0);
    printVec(p);

}

