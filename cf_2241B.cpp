#include<bits/stdc++.h>
using namespace std;

int mulNum(int n)
{
    int c=0;
    int t=n;
    while(t)
    {
        t/=10;
        c++;
    }

    int p=1;
    for(int i=0; i<c; i++)
    {
        p*=10;
    }
    return p+1;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        cout<<mulNum(x)<<'\n';
    }
    return 0;
}


