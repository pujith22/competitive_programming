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
 
int32_t main()
{
    pujith22();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double p = sqrt(n);
        if(p!=int32_t(p))
            cout<<-1<<"\n";
        else if(p==0)
            cout<<p<<" "<<p<<"\n";
        else
            cout<<p-1<<" "<<1<<"\n";
    }
    return 0;
}