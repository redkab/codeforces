#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        int xk, yk, xq, yq;
        cin>>xk>>yk;
        cin>>xq>>yq;
        map<pair<int, int>, int>m;
        int nx, ny;
        int c=0;
        if(a==b)
        {
            vector<int>dx = {-a, -a, a, a};
            vector<int>dy = {-a, a, -a, a};
            for(int i=0; i<4; i++)
            {
                nx = xk + dx[i];
                ny = yk + dy[i];
                m[{nx, ny}]++;
            }
            for(int i=0; i<4; i++)
            {
                nx = xq + dx[i];
                ny = yq + dy[i];
                m[{nx, ny}]++;
            }
            for(auto it:m)
            {
                if(it.second ==2)c++;
            }
            cout<<c<<'\n';
            continue;
        }
        vector<int>dx = {-b, -b, -a, -a, a, a, b, b};
        vector<int>dy = {-a, a, -b, b, b, -b, a, -a};
        
        for(int i=0; i<8; i++)
        {
            nx = xk + dx[i];
            ny = yk + dy[i];
            m[{nx, ny}]++;
        }
        
        for(int i=0; i<8; i++)
        {
            nx = xq + dx[i];
            ny = yq + dy[i];
            m[{nx, ny}]++;
        }
        for(auto it : m)
        {
            if(it.second == 2)c++;
        }
        cout<<c<<'\n';
    }
}


