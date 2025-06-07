#include <bits/stdc++.h>
#define int long long

using namespace std;

int mod = 998244353LL;

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
    vector<int>pow2(100002);
    int k=1;
    for(int i=0;i<100002;i++)
    {
        pow2[i]=k;
        k = k*2;
        k = k%mod;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>p(n);
        vector<int>q(n);
        for(int i=0;i<n;i++)
            cin>>p[i];
        for(int i=0;i<n;i++)
            cin>>q[i];
        int pmax = 0;
        int qmax = 0;
        for(int i=0;i<n;i++)
        {
            if(p[pmax]<p[i])
                pmax = i;
            if(q[qmax]<q[i])
                qmax = i;
            if(p[pmax]==q[qmax])
            {
                if(q[i-pmax]>p[i-qmax])
                    cout<<(pow2[p[pmax]]+pow2[q[i-pmax]])%mod<<" ";
                else
                    cout<<(pow2[q[qmax]]+pow2[p[i-qmax]])%mod<<" ";
            }
            else if(p[pmax]>q[qmax])
                cout<<(pow2[p[pmax]]+pow2[q[i-pmax]])%mod<<" ";
            else
                cout<<(pow2[p[i-qmax]]+pow2[q[qmax]])%mod<<" ";
        }
        cout<<"\n";
    }
    return 0;
}