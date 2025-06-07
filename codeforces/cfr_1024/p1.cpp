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

bool func(int n, int m, int p, int q) {
    if(n%p==0)
        return (n/p)*q==m;
    return true;
}
 
int32_t main()
{
    pujith22();
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,p,q;
        cin>>n>>m>>p>>q;
        if(func(n,m,p,q))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}