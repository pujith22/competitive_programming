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

bool func(int l1,int b1,int l2,int b2, int l3, int b3)
{
    if(l1==l2+l3 && l1-b1==b2 && b2==b3)
        return true;
    return false;
}

void solve()
{
    int l1,b1,l2,b2,l3,b3;
    cin>>l1>>b1>>l2>>b2>>l3>>b3;
    if((l1==l2 && l2==l3 && b1+b2+b3==l1) || (b1==b2 && b2==b3 && l1+l2+l3==b1) || func(l1,b1,l2,b2,l3,b3)||func(b1,l1,b2,l2,b3,l3))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

int32_t main()
{
    pujith22();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}