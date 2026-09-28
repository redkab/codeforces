#include<iostream>
using namespace std;

void solve(int a, int b, int c)
{
    if(c%2==0)
    {
        if(a>b)
        {
            cout<<"First\n";
            return;
        }
        else 
        {
            cout<<"Second\n";
            return;
        }
    }
    if(a+1>b)cout<<"First\n";
    else cout<<"Second\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        solve(a,b,c);
    }
}
