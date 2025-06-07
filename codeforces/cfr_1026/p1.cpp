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

int func(vector<int>&arr)
{
    sort(arr.begin(),arr.end());
    int firstOdd = arr.size();
    int firstEven = arr.size();
    int lastOdd = -1;
    int lastEven = -1;

    for(int i=0;i<arr.size();i++)
    {
        if(firstOdd==arr.size() && arr[i]%2==1)
            firstOdd = i;
        if(firstEven==arr.size() && arr[i]%2==0)
            firstEven = i;
        if(arr[i]%2==0)
            lastEven = i;
        if(arr[i]%2==1)
            lastOdd = i;
    }
    return min(firstOdd+arr.size()-1-lastOdd, firstEven+arr.size()-1-lastEven);
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
        cout<<func(arr)<<"\n";
    }
    return 0;
}