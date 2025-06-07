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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(min(a,c)>=min(b,d))
            cout<<"Gellyfish\n";
        else
            cout<<"Flower\n";
    }
    return 0;
}