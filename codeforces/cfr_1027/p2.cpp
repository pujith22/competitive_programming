#include <bits/stdc++.h>
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
    cout.tie(NULL);
}

bool func(int zeros, int ones, int matches, int mismatches)
{
    if (zeros<mismatches || ones<mismatches)
        return false;
    zeros -= mismatches;
    ones -= mismatches;
    if(zeros%2!=0 or ones%2!=0)
        return false;
    return zeros/2 + ones/2 == matches;
}

int32_t main()
{
    pujith22();
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count = 0;
        for(char c: s)
            if(c=='0')
                count++;
        int zerocount = count;
        int onecount = s.size()-count;
        int mismatch = (s.size()-2*k)/2;
        if(func(zerocount,onecount,k,mismatch))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}