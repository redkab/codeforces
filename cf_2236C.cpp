#include<iostream>
#include<vector>
using namespace std;

int f(int a, int b, int x)
{
    if(a==b)
    {
        return 0;
    }
    int big = max(a, b), small = min(a, b);
    int addMoves = big-small;
    int divMoves = 1 + f(big/x, small, x);
    return min(addMoves, divMoves);
}

void solve(int a, int b, int x)
{
    cout<<f(a, b, x)<<'\n';
}

    



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, x;
        cin>>a>>b>>x;
        solve(a, b, x);
    }
}
