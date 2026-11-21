#include<iostream>
#include<vector>
using namespace std;

void solve(string &s)
{
    vector<int>left(26, 0), right(26, 0);
    for(char c:s)right[c-'a']++;
    right[s[0]-'a']--;
    left[s[0]-'a']++;
    int n = s.length();
    int maxF, lf=0, rf=0;
    for(int x:left)if(x!=0)lf++;
    for(int x:right)if(x!=0)rf++;
    maxF = lf+rf;
    //cout<<lf<<' '<<rf<<'\n';
    for(int i=1; i<n-1; i++)
    {
        char c = s[i];
        left[c-'a']++;
        right[c-'a']--;
        if(left[c-'a'] == 1)lf++;
        if(right[c-'a'] == 0)rf--;
        maxF = max(maxF, lf+rf);
    }
    cout<<maxF<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
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
