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
        vector<int>b(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        vector<vector<int>> sol;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    sol.push_back({1,j+1});
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(b[j]>b[j+1])
                {
                    swap(b[j],b[j+1]);
                    sol.push_back({2,j+1});
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
                sol.push_back({3,i+1});
        }
        cout<<sol.size()<<"\n";
        for(auto v: sol)
            cout<<v[0]<<" "<<v[1]<<"\n";
    }
    return 0;
}