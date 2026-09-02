#include<iosteam>
#include<vector>

bool isPossible(vector<string>&abb, vector<int>&freq)
{
    int m = abb.size();
    for(string s : abb)
    {
        for(char c : s)
        {
            if(!
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        vector<string>words(n);
        vector<string>abb(m);
        vector<int>starts(26, 0);
        for(int i=0; i<n; i++)
        {
            cin>>words[i];
            starts[words[i][0]-'a']++;
        }
        for(int i=0; i<m; i++)
        {
            cin>>abb[i];
        }
        if(isPossible(abb, starts))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

