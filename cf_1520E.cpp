#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(string &s)
{
    int n = s.length();
    vector<int>v;
    long long int c=0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '*')v.push_back(i);
    }
    if(v.size()==0)
    {
        cout<<0<<endl;
        return;
    }
    long long int med = v.size()/2;
    long long int m=0;
    long long int medPos = v[med];
    for(int i=0; i<v.size(); i++)
    {
        c += abs(medPos - med + i - v[i]);
    }
    cout<<c<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        solve(s);
    }
}
