#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout<<"t\n";
    cin>>t;
    while(t--)
    {
        cout<<"n\n";
        int n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        cout<<"Sorted\n";
        int med = v[n/2];
        int off=0;
        for(int i=0; i<n; i++)
        {
            if(v[i] != med)off++;
        }
        cout<<"off and med\n";
        if(off%2 == 0)cout<<off/2<<'\n';
        else cout<<off/2 + 1<<'\n';
    }
    return 0;
}
