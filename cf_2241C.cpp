#include<bits/stdc++.h>
using namespace std;

int minLen(string str)
{
    stack<char>s;

    for(int i=0; i<str.size(); i++)
    {
        if(s.empty())s.push(str[i]);
        else if(s.top() == str[i])continue;
        else s.push(str[i]);
        //cout<<"Stack size is "<<s.size()<<'\n';
    }

    return ((s.size()==2) + 1);
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
        //cout<<"string is "<<s<<'\n';
        cout<<minLen(s)<<'\n';
    }
    return 0;
}
