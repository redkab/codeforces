#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int>&v)
{
    sort(v.begin(), v.end());
    if(v[0] == v[v.size()-1])
    {
        cout<<"-1\n";
        return ;
    }
    int ind;
    vector<int>a, b;
    for(int i=1; i<v.size(); i++)
    {
        if(v[i] != v[i-1])
        {
            ind = i;
            break;
        }
    }
    for(int i=0; i<ind; i++)a.push_back(v[i]);
    for(int i=ind; i<v.size(); i++)b.push_back(v[i]);
    cout<<a.size()<<' '<<b.size()<<'\n';
    for(int n : a)cout<<n<<' ';
    cout<<'\n';
    for(int n:b)cout<<n<<' ';
    cout<<'\n';

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        solve(v);
    }
}

