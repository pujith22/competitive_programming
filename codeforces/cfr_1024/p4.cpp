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
    cout.tie(NULL);
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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        vector<int> sol(n);
        vector<int> even;
        vector<int>odd;
        for(int i=0;i<n;i+=2)
            even.push_back(arr[i]);
        for(int i=1;i<n;i+=2)
            odd.push_back(arr[i]);
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
                sol[i] = even[i/2];
            else
                sol[i] = odd[(i-1)/2];
        }
        for(int i=0;i<n;i++)
            cout<<sol[i]<<" ";
        cout<<"\n";
    }
    return 0;
}