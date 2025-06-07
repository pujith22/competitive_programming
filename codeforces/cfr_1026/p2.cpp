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

bool possible(string& s)
{
    int par = 0;
    int count = 0;
    for(char c: s)
    {
        if(c=='(')
            par++;
        else
            par--;
        if(par==0)
            count+=1;
    }
    return count>1;
}
 
int32_t main()
{
    pujith22();
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       cout<< (possible(s)?"YES\n":"NO\n");
    }
    return 0;
}