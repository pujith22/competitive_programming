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
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    // reverse(arr.begin(),arr.end());
    int lo = 0;
    int hi = 1e9+1;
    while(lo+1<hi)
    {
        int mid = lo + (hi-lo)/2;
        //int count = upper_bound(arr.begin(),arr.end(),mid) - lower_bound(arr.begin(),arr.end(),mid);
        if(arr.end()-lower_bound(arr.begin(),arr.end(),mid)>=mid)
            lo = mid;
        else
            hi = mid;
    }
    cout<<lo<<"\n";
    return 0;
}