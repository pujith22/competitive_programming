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

int32_t main()
{
    pujith22();
    int n;
    cin>>n;
    int count = 0;
    int a,b;
    while(n--)
    {
        cin>>a>>b;
        if(b>a)
            count++;
    }
    cout<<count;
    return 0;
}