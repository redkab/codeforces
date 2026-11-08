#include<iostream>
#include<string>
#include<cmath>
using namespace std;

bool isSquare(int x)
{
    int sr = (int)sqrt(x);
    return sr*sr == x;
}
void solve(string &s)
{
    int y=0;
    for(char c:s)
    {
        y = y*10 + c-'0';
    }

    if(isSquare(y))
    {
        cout<<0<<' '<<(int)sqrt(y)<<endl;
        return;
    }

    cout<<-1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        solve(s);
    }
}
