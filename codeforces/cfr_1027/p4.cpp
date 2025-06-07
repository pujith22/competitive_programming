#include <bits/stdc++.h>
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

int func(vector<pair<int,int>>& arr)
{

}
 
int32_t main()
{
    pujith22();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>> n;
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i].first>>arr[i].second;
        int firstMinIndex = -1;
        int secondMinIndex = -1;
        int firstMaxIndex = -1;
        int secondMaxIndex = -1;
        cout<<func(arr)<<"\n";
    }
    return 0;
}