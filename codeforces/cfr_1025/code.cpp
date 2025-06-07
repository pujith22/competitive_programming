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

bool sol(vector<int>&arr)
{
    if(arr[0]==0 && arr[1]!=1)
        return true;
    if(arr[arr.size()-1]==0 && arr[arr.size()-2]!=1)
        return true;
    int count = 0;
    for(int i=1;i<arr.size()-1;i++)
    {
        if(arr[i]==0 && !(arr[i-1]==1 || arr[i+1]==1))
            return true;
        count+=arr[i];
    }
    count+=arr.front();
    count+=arr.back();
    if(count>arr.size()-1)
        return true;
    return false;
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
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<(sol(a)==true?"YES":"NO")<<"\n";
    }
    return 0;
}