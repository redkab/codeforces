#include<iostream>
#include<vector>
using namespace std;

void solve(int n, int k)
{
    int lev=0;
    int h=n, l=n;

    while(h>=k)
    {
        if(h==k || l==k)
        {
            cout<<lev<<'\n';
            return;
        }
        l/=2;
        h = h/2 + h%2;
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
