#include<bits/stdc++.h>
using namespace std;

bool hasThreeEmpty(string s)
{
    int n = s.length();
    for(int i=0; i<=n-3; i++)
    {
        if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.')return 1;
    }
    return 0;
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
        vector<int>v;
        if(hasThreeEmpty(s))
        {
            cout<<"2\n";
            continue;
        }
        int c=0;
        for(char x:s)if(x=='.')c++;
        cout<<c<<'\n';
    }
}
