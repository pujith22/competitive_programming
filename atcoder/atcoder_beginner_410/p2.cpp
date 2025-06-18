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
    int n,q;
    cin>>n>>q;
    vector<int>arr(n,0);
    for(int i=0;i<q;i++)
    {
        int inp;
        cin>>inp;
        inp--;
        if(inp>=0)
        {
            arr[inp]++;
            cout<<inp+1<<" ";
        }
        else
        {
            int sol = 0;
            for(int i=1;i<n;i++)
            {
                if(arr[i]<arr[sol])
                    sol = i;
            }
            arr[sol]++;
            cout<<sol+1<<" ";

        }
        
    }
    return 0;
}