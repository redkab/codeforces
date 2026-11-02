#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(vector<int>&a)
{
    int n = a.size();
    int c=0, sum=0;
    sort(a.begin(), a.end());
    vector<int>cum(n);
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
        cum[i] = sum;
    }

    int bsum=0;
    for(int i=n-1; i>=0; i--)
    {
        bsum += a[i];
        c++;
        if(bsum > cum[i] - a[i])break;
    }
    cout<<c<<endl;
}

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    solve(a);
}
