#include<iostream>
using namespace std;

void solve(int nc, int pc)
{
    if(nc%2==0 && pc>=nc)
    {
        cout<<'0'<<'\n';
        return;
    }

    if(pc>=nc && nc%2)
    {
        cout<<'1'<<'\n';
        return;
    }
    int diff = nc-pc;
    int ops;
    if(diff%2==0)ops = diff/2;
    else ops = diff/2 + 1;
    nc -= ops;
    pc += ops;
    if(nc%2)
    {
        cout<<ops+1<<'\n';
        return;
    }
    cout<<ops<<'\n';
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int pc=0, nc=0;
        for(int i=0; i<n; i++)
        {
            int num;
            cin>>num;
            if(num<0)nc++;
            else pc++;
        }
        solve(nc, pc);
        }
}
