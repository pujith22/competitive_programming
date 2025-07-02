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
        int n,j,k;
        cin>>n>>j>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        j--;
        int maxi = arr[0];
        for(int i: arr)
        {
            maxi = max(i,maxi);
        }
        cout<<((k>1 || maxi==arr[j]) ? "YES\n" : "NO\n");
    }
    return 0;
}