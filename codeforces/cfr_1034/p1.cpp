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
        vector<int>a(4);
        for(int i=0;i<n;i++)
            a[i%4]++;
        if(a[0]!=a[3] || a[1]!=a[2])
            cout<<"Alice\n";
        else
            cout<<"Bob\n";
    }
    return 0;
}