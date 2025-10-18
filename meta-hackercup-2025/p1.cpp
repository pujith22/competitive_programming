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

int sol(vector<int>&arr)
{
    int ans = 0;
    for(int i=0;i<arr.size()-1;i++)
        ans = max(ans, abs(arr[i+1]-arr[i]));
    return ans;
}

int32_t main()
{
    pujith22();
    int t;
    cin>>t;
    for(int c=1;c<=t;c++)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Case #"<<c<<": "<<sol(arr)<<"\n";
    }
    return 0;
}