#include<iostream>
#include<string>
#include<vector>
#include<utility>
using namespace std;

bool possible(pair<int, int>a, pair<int, int>b)
{
    return a.first>=b.first && a.second >= b.second;
}
void solve(string &s)
{
    int zc=0, oc=0;
    vector<pair<int, int>>ex(s.length());
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '0')zc++;
        else oc++;
        ex[i] = {oc, zc};
    }
    int maxi=-1; 
    pair<int, int>targ = {zc, oc}, ans;
    for(int i=0; i<s.length(); i++)
    {
        if(possible( targ, ex[i]))
        {
            maxi=i;
            ans = ex[i];
        }
    }
    int cost = s.length()-1-maxi;
    cout<<cost<<endl;
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
