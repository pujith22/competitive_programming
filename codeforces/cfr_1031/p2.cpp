#include<bits/stdc++.h>
#define int long long

using namespace std;

void pujith22()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}

bool solve(int w,int h,int a,int b,int x1, int y1, int x2, int y2)
{
    
}

int32_t main()
{
    pujith22();
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,a,b;
        cin>>w>>h>>a>>b;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<(solve(w,h,a,b,x1,y1,x2,y2)?"YES":"NO")<<"\n";
    }
    return 0;
}