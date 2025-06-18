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
        int n,pos;
        cin>>n>>pos;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<abs(arr.back()-arr.front())+min(abs(pos-arr.front()),abs(pos-arr.back()))<<"\n";
    }
    return 0;
}