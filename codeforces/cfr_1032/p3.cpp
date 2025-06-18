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
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int>(m,0));
        int row = 0;
        int col = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]>a[row][col])
                {
                    row = i;
                    col = j;
                }
            }
        }
        int maxi = a[row][col];
        vector<int> rows(n,0);
        vector<int> cols(m,0);
        vector<vector<int>> counter(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==maxi)
                {
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        row = 0;
        col = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                counter[i][j] = rows[i]+cols[j];
                if(a[i][j]==maxi)
                    counter[i][j]--;
                if(counter[i][j]>counter[row][col])
                {
                    row = i;
                    col = j;
                }
            }
        }
        for(int i=0;i<n;i++)
            a[i][col]--;
        for(int j=0;j<m;j++)
            a[row][j]--;
        a[row][col]++;
        maxi = INT_MIN;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                maxi = max(maxi,a[i][j]);
        cout<<maxi<<"\n";
    }
    return 0;
}