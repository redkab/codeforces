#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void solve(int n, int k)
{
    queue<int>q;
    int lev=0;
    q.push(n);

    while(!q.empty())
    {
        int s = q.size();
        for(int i=0; i<s; i++)
        {
            int v = q.front();
            q.pop();
            if(v==k)
            {
                cout<<lev<<'\n';
                return;
            }
            if(v%2==0)
            {
                if(v/2)q.push(v/2);
            }
            else
            {
                if(v/2)q.push(v/2);
                if(v/2)q.push(v/2 + 1);
            }
        }
        lev++;
    }
    cout<<-1<<'\n';
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        solve(n, k);
    }
}
