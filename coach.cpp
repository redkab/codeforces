#include<bits/stdc++.h>
using namespace std;

vector<int>bfs(vector<vector<int>>&al, int start, vector<bool>&vis)
{
    queue<int>q;
    vis[start] = 1;
    q.push(start);
    int x;
    vector<int>v;

    while(!q.empty())
    {
        x = q.front();
        q.pop();
        v.push_back(x);

        for(int neigh : al[x])
        {
            if(!vis[neigh])
            {
                vis[neigh] = 1;
                q.push(neigh);
            }
        }
    }
    return v;
}

void solve(vector<vector<int>>&al, int m)
{
    int n = al.size()-1;
    
    if(m==0 && n%3 ==0)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<i<<' ';
        }
        return;
    }

    vector<bool>vis(n+1);
    vector<vector<int>>v;
    for(int i=1; i<=n; i++)
    {
        if(!vis[i])v.push_back(bfs(al, i, vis));
    }

    for(int i=0; i<v.size(); i++)
    {
        if(v[i].size() %3 != 0)
        {
            cout<<"-1\n";
            return;
        }
    }

    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v[i].size(); j++)
        {
            if(j%3==0 && j!=0)cout<<'\n';
            cout<<v[i][j]<<' ';
        }
    }
}


int main()
{
    int n,m, a, b;
    cin>>n>>m;
    vector<vector<int>>al(n+1);
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
        al[a].push_back(b);
        al[b].push_back(a);
    }
    solve(al, m);
    return 0;
}






