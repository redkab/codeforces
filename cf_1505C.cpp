#include<bits/stdc++.h>
using namespace std;

string isFibonacci(string s)
{
    for(int i=2; i<s.length(); i++)
    {
        if(!((s[i-2] - 'A' + s[i-1]-'A')%26 == s[i]-'A'))return "NO";
    }
    return "YES";
}


int main()
{
    string s;
    cin>>s;
    cout<<isFibonacci(s)<<'\n';
}
