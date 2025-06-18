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
    cout.tie(NULL);
}


int func(int i,int m, int h, int magic, vector<int>& a,vector<int>& b, vector<vector<int>>&dp)
{
    if(i<0)
        return h;
    if(m>magic)
        return -1;
    if(dp[i][m]!=INT_MIN)
        return dp[i][m];
    return dp[i][m] = max(func(i-1,m,h,magic,a,b,dp)-a[i],func(i-1,m+b[i],h,magic,a,b,dp));
}

int32_t main()
{
    pujith22();
    int n,h,m;
    cin>>n>>h>>m;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    vector<vector<int>>dp(n+1,vector<int>(m+1,INT_MIN));
    dp[n-1][m] = func(n-1,m,h,m,a,b,dp);
    int sol = -1;
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
            if(dp[i][j]>=0)
                sol = i;
    cout<<min(n,sol+1);
    return 0;
}