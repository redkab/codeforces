#include<bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    int big = max(a, b);
    int i;
    for(i=1; big*i%a != 0; i++);
    return big*i;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        cout<<lcm(a, b)<<'\n';
    }
}
