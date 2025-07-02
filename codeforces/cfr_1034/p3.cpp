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
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        vector<int>prefix_min(n);
        vector<int>suffix_max(n);
        prefix_min[0] = a[0];
        for(int i=1;i<n;i++)
            prefix_min[i]=min(prefix_min[i-1],a[i]);
        suffix_max[n-1] = a[n-1];
        for(int i=n-2;i>=0;i--)
            suffix_max[i] = max(suffix_max[i+1],a[i]);
        string sol = "";
        for(int i=0;i<n;i++)
        {
            if(a[i]==suffix_max[i] || a[i]==prefix_min[i])
                sol.push_back('1');
            else
                sol.push_back('0');
        }
        cout<<sol<<"\n";
    }
    return 0;
}