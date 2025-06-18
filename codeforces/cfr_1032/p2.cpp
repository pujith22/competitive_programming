#include<bits/stdc++.h>
#define int long long

using namespace std;

void pujith22()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

bool func1(string s)
{
    if(s.size()<3)
        return false;
    vector<int> hash(26,0);
    for(char c: s)
    {
        hash[c-'a']+=1;
        if(c!=s.back() && hash[c-'a']>1)
            return true;
        if(c==s.back() && hash[c-'a']>2)
            return true;
    }
    return false;
}

bool func2(string s)
{
    if(s.size()<3)
        return false;
    reverse(s.begin(),s.end());
    vector<int> hash(26,0);
    for(char c: s)
    {
        hash[c-'a']+=1;
        if(c!=s.back() && hash[c-'a']>1)
            return true;
        if(c==s.back() && hash[c-'a']>2)
            return true;
    }
    return false;
}

int32_t main()
{
    pujith22();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<((func1(s)|| func2(s))?"YES\n":"NO\n");
    }
    return 0;
}