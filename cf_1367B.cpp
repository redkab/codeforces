#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&a)
{
    int n = a.size();
    int eo=0, oe=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0 && i%2==1)eo++;
        else if(a[i]%2==1 && i%2==0)oe++;
    }
    if(oe != eo)
    {
        cout<<-1<<'\n';
        return;
    }
    cout<<oe<<'\n';
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        solve(a);
    }
}
