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
        int n;
        cin>>n;
        vector<int>arr(n);
        int p = 1;
        for(int i=0;i<=(n-1)/2;i++)
        {
            arr[i]=p++;
            arr[n-i-1]=p++;
        }
        if(n%2==1)
            arr[n/2] = n;
        for(int i:arr)
            cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}