#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;


void solve(int n, int m)
{
    if(n >= m)
    {
        cout<<n-m<<endl;
        return;
    }
    int up=n;
    while(up <= m)up*=2;

    vector<vector<int>>al(up+1);
    for(int i=1; i<=up; i++)
    {
        al[i].push_back(i-1);
    }
    for(int i=0; i<=up; i++)
    {
        al[i].push_back(i*2);
    }
    queue<int>q;
    q.push(n);

    int lev=0;
    vector<bool>vis(up+1, 0);
    vis[n] = 1;

    while(!q.empty())
    {
        int s = q.size();
        for(int i=0; i<s; i++)
        {
            int curr = q.front();
            q.pop();
            if(lev == m)
            {
                cout<<lev<<endl;
                return;
            }
            for(int neigh : al[curr])
            {
                if(!vis[neigh])
                {
                    vis[neigh] = 1;
                    q.push(neigh);
                }
            }
        }
        lev++;
    }
}



int main()
{
    int n, m;
    cin>>n>>m;
    solve(n, m);
}
