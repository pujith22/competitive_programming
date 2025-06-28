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

bool func(string& s,string& t)
{
    for(int i=1;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            bool present = false;
            for(char ch: t)
                if(ch==s[i-1])
                    present = true;
            if(!present)
                return false;
        }
    }
    return true;
}

int32_t main()
{
    pujith22();
    string s,t;
    cin>>s>>t;
    cout<<(func(s,t) ? "Yes":"No");
    return 0;
}