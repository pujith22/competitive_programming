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

void dfs(vector<vector<int>>&graph,vector<int>&weight,int acc,int parity,vector<int>&ans,int src)
{
    ans[src] = acc;
    for(int i: graph)
    {

    }
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
        vector<int> weights(n+1);
        for(int i=0;i<n;i++)
            cin>>weights[i+1];
        weights[0] = 0;
        vector<vector<int>> graph(n+1);
        graph[0].push_back(1);
        graph[1].push_back(0);
        for(int i=0;i<n-1;i++)
        {
            int u,v;
            cin>>u;
            cin>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<int> ans(n+1);
        vector<int> ans1(n+1);
        vector<int> level(n+1);
        dfs(graph,weights,0,0,ans,0,level);
        dfs(graph,weights,0,0,ans1,1,level);
    }
    return 0;
}