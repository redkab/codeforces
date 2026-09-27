#include<iostream>
#include<vector>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int min = 100001;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(abs(x)<min)min = abs(x);
    }
    cout<<min<<'\n';
}

