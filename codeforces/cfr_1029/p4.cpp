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

bool sol(vector<int>&arr)
{
   int n = arr.size();
   if((arr.front()+arr.back())%(n+1)!=0)
    return false;
   int xplusy = (arr.front()+arr.back())/(n+1);
   int xminusy = arr[1]-arr[0];
   for(int i=1;i<n;i++)
    if(arr[i]-arr[i-1]!=xminusy)
        return false;
   int doublex = xplusy + xminusy;
   if(doublex%2!=0)
    return false;
    int x = doublex/2;
    int y = xplusy-x;
    if(x<0 || y<0)
        return false;
    for(int i=0;i<n;i++)
    {
        arr[i] -= x*(i+1);
        arr[i] -= y*(n-i);
        if(arr[i]!=0)
            return false;
    }
    return true;
}

int32_t main()
{
    pujith22();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        bool ans = sol(arr);
        cout<<(ans?"YES":"NO")<<"\n";
    }
    return 0;
}