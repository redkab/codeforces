#include<bits/stdc++.h>
using namespace std;

bool isPerf(int n)
{
    return (int)sqrt(n*n) == n;
}
void bfs(vector<vector<int>>&al, vector<vector<int>>&prods, vector<int>&arr, int start)
{

    //cout<<"Entered bfs with start "<<start<<'\n';
    int n = al.size()-1;
    queue<int>q;
    vector<int>par(n+1);
    vector<bool>vis(n+1, 0);
    q.push(start);
    vis[start] = 1;
    par[start] = start;
    prods[start][start] = 1;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        prods[start][node] = prods[start][par[node]]*arr[node];

        for(int x: al[node])
        {
            if(!vis[x])
            {
                vis[x] = 1;
                par[x] = node;
                q.push(x);
            }
        }
    }
    //cout<<"Finished bf\n";
}

void printProd(vector<vector<int>>&p)
{
    for(int i=1; i<p.size(); i++)
    {
        for(int j=1; j<p[i].size(); j++)
        {
            cout<<p[i][j]<<' ';
        }
        cout<<'\n';
    }
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        //cout<<"Enter n\n";
        cin>>n;
        vector<vector<int>>al(n+1);
        vector<int>arr(n+1);
        //cout<<"created arrs of size "<<n+1<<'\n';

        for(int i=1; i<=n; i++)
        {
            //cout<<"Enter a"<<i<<'\n';
            cin>>arr[i];
        }
        int a,b;
        for(int i=0; i<n-1; i++)
        {
          //  cout<<"Enter edge "<<i<<'\n';
            cin>>a>>b;
            al[a].push_back(b);
            al[b].push_back(a);
        }
        vector<vector<int>>prods(n+1, vector<int>(n+1, 0));
        //cout<<"Prods size is "<<prods.size()<<'\n';
        int count=0;
        for(int i=1; i<=n; i++)
        {
            bfs(al, prods, arr, i);
        }
       // printProd(prods);
        for(int i=1; i<=n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                for(int k=j+1; k<=n; k++)
                {
                    if(isPerf(prods[i][j]*prods[i][k]*prods[j][k]))
                    {
                        count++;
                        //cout<<i<<' '<<j<<' '<<k<<'\n';
                    }
                }
            }
        }
        cout<<count<<'\n';
    }
    return 0;
}


