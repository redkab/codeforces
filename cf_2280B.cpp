#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(int n)
{
    cout<<'?'<<' '<<1<<' '<<n<<endl;
    int oc;
    cin>>oc;
    if(oc==0 || n-oc==0)
    {
        cout<<"! NO"<<endl;
    }
    cout<<'?'<<' '<<1<<' '<<oc<<endl;
    int x;
    cin>>x;
    if(x==oc)
    {
        cout<<"! NO"<<endl;
        return;
    }
    cout<<"! YES"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        solve(n);
    }
}

