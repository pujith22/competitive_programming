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

int canreachfromright(const vector<int>&arr, int i, vector<int>&reach, int height)
{
    if(i>=arr.size())
        return 0;
    if(i<0)
        return 0;
    if(arr[i]<=height)
        return reach[i] = 1;
    if(reach[i]!=-1)
        return reach[i];

    return reach[i] = (canreachfromright(arr,i+1,reach,height)==1 && abs(arr[i+1]-arr[i]) <= height);
}

int canreachfromleft(const vector<int>&arr, int i, vector<int>&reach, int height)
{
    if(i>=arr.size())
        return 0;
    if(i<0)
        return 0;
    if(arr[i]<=height)
        return reach[i] = 1;
    if(reach[i]==1)
        return reach[i];

    return reach[i] = (canreachfromleft(arr,i-1,reach,height)==1 && abs(arr[i]-arr[i-1]) <= height);
}

bool can_reach_all(const vector<int>&arr, int height)
{
    vector<int>reach(arr.size(),-1);
    int count = 0;
    for(int i=0;i<arr.size();i++)
    {
        reach[i] = canreachfromright(arr,i,reach, height) || canreachfromleft(arr,i,reach,height);
        if(reach[i]==1)
            count++;
    }
    return count==arr.size();
}

int sol(const vector<int>&arr)
{
    int lo = 0;
    int hi = 1e9+7;
    while(lo+1<hi)
    {
        int mid = lo + (hi-lo)/2;
        if(can_reach_all(arr,mid))
            hi = mid;
        else
            lo = mid;

    }
    return hi;
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
            cin>>arr[i];
        cout<<"Case #"<<c<<": "<<sol(arr)<<"\n";
    }
    return 0;
}