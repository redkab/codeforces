#include<iostream>
using namespace std;

int moves(int start, int mh)
{
    int c=0;
    while(mh >0)
    {
        mh -= start;
        start--;
        c++;
    }
    return c;
}


void solve(int mh)
{
    int minMoves = mh;
    for(int i=1; i<=mh; i++)
    {
        int kill = moves(i, mh);
        int tr = i-1;
        minMoves = min(minMoves, kill+tr);
    }
    cout<<minMoves<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        solve(x);
    }
}

