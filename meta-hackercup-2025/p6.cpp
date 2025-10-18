#include<bits/stdc++.h>
#define int long long

using namespace std;

void pujith22()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

string sol(string s)
{
    int i = s.size()-1;
    int countA = 0;
    int countB = 0;
    for(;i>=0;i--)
    {
        if(s[i]=='B')
            countB++;
        else
            break;
    }
    for(;i>=0;i--)
    {
        if(s[i]=='A')
            countA++;
        else
            break;
    }
    if(countA>countB)
        return "Alice";
    return "Bob";
}

int32_t main()
{
    pujith22();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        string s;
        cin>>n>>s;
        cout<<"Case #"<<i<<": "<<sol(s)<<"\n";
    }
    return 0;
}