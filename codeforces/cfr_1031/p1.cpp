#include<bits/stdc++.h>
#define int long long

using namespace std;

void pujith22()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}

int solve(int k, int a,int b, int x,int y)
{
    int sol = 0;
    int cooked = -1;
    if(x<=y)
    {
        sol = max(0LL,(k-a+x)/x);
        cooked = 1;
        k -= sol*x;
    }
    else
    {
        sol = max(0LL,(k-b+y)/y);
        cooked = 2;
        k -= sol*y;
    }
    if(cooked==1)
    {
        int temp = sol;
        sol += max(0LL,(k-b+y)/y);
        k -= (sol-temp)*y;
    }
    else
    {
        int temp = sol;
        sol += max(0LL,(k-a+x)/x);
        k -= (sol-temp)*x;
    }
    if(k==a || k==b)
        sol++;
    return sol;
}

int32_t main()
{
    pujith22();
    int t;
    cin>>t;
    while(t--)
    {
        int k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
        cout<<solve(k,a,b,x,y)<<"\n";
    }
    return 0;
}