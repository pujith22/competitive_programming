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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int sol = -1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                sol = i;
                break;
            }
        }
        int ans = -1;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==1)
            {
                ans = i;
                break;
            }
        }
        cout<<((ans-sol+1<=k)?"YES":"NO")<<"\n";
    }
    return 0;
}