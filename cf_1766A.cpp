#include<iostream>
#include<vector>
using namespace std;
#include<cmath>
bool isRound(int x)
{
    int dc;
    if(x>0 && x<10)dc=1;
    else if(x>=10 && x<100)dc=2;
    else if(x>=100 && x<1000)dc=3;
    else if(x>=1000&& x<10000)dc=4;
    else if(x>=10000 && x<100000)dc=5;
    else dc=6;
    int d=1;
    for(int i=0; i<dc-1; i++)d*=10;
    return x%d==0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int c=0;
    vector<int>v(1000000, 0);
    for(int i=1; i<=999999; i++)
    {
        if(isRound(i))c++;
        v[i] = c;
    }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<v[n]<<'\n';
    }
}
