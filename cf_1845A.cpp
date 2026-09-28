#include<iostream>
#include<vector>
using namespace std;

void solve(int n, int k, int x)
{
    if(x==1 &&k==1)
    {
        cout<<"NO\n";
        return;
    }
    if(x!=1)
    {
        cout<<"YES\n";
        cout<<n<<'\n';
        for(int i=0; i<n; i++)cout<<'1'<<' ';
        cout<<'\n';
        return;
    }
    if(k==2)
    {
        if(n%2)
        {
            cout<<"NO\n";
            return;
        }
    }
    if(n==1)
    {
        cout<<"NO\n";
        return;
    }

    if(n%2==0)
    {
        cout<<"YES\n";
        cout<<n/2<<'\n';
        for(int i=0; i<n/2; i++)
        {
            cout<<'2'<<' ';
        }
        cout<<'\n';
        return;
    }
    cout<<"YES\n";
    cout<<(n-3)/2 + 1<<'\n';
    cout<<'3'<<' ';
    for(int i=0; i<(n-3)/2; i++)cout<<'2'<<' ';
    cout<<'\n';
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, x;;
        cin>>n>>k>>x;
        solve(n, k, x);
    }
}
