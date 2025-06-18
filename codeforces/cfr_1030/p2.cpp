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
        // vector<vector<int>> a(n,vector<int>(n,0));
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //         a[i][j] = j+1;
        // }
        vector<vector<int>> sol;
        for(int i=0;i<n;i++)
        {
            // reverse(a[i].begin(),a[i].begin()+i+1);
            // reverse(a[i].begin()+i+1,a[i].end());
            sol.push_back({i+1,1,i+1});
            sol.push_back({i+1,min(i+2,n),n});
        }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //         cout<<a[i][j]<<"\t";
        //     cout<<"\n";
        // }
        cout<<sol.size()<<"\n";
        for(auto v: sol)
            cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<"\n";
    }
    return 0;
}