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

int func(vector<int>& arr)
{
    set<int> s1;
    set<int> s2;
    s1.insert(arr[0]);
    int partition = 1;
    for(int i=1;i<arr.size();i++)
    {
        s1.erase(arr[i]);
        s2.insert(arr[i]);
        if(s1.empty())
        {
            partition++;
            s1 = s2;
            s2.clear();
        }        
    }
    return partition;
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
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<func(arr)<<"\n";
    }
    return 0;
}