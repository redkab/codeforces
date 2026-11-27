#include<iostream>
#include<vector>
using namespace std;

void solve(int l, int a, int b)
{
    vector<bool>st(l, 0), bl(l, 0);
    int i=0;
    int ind;
    while(!st[i])
    {
        st[i] = 1;
        i = (i+a)%l;
    }
    i=0;

    while(!bl[i])
    {
        bl[i] = 1;
        i = (i+b)%l;
    }
    int c=0;
    for(int i=0; i<l; i++)if(st[i] && bl[i])c++;
    cout<<c<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int l, a, b;
        cin>>l>>a>>b;
        solve(l, a,  b);
        }
}

