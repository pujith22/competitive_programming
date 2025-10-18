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



int32_t main()
{
    pujith22();
    int t;
    cin>>t;
    for(int c=1;c<=t;c++)
    {
        int n,a,b;
        cin>>n>>a>>b;
        cout<<"Case #"<<c<<": ";
        int sol = 0;
        for(int i=0;i<2*n-1;i++)
            cout<<1<<" ";
        cout<<b;
        cout<<"\n";
    }
    return 0;
}