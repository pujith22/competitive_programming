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
    int n,l;
    cin>>n>>l;
    vector<int> d(n);
    d[0] = 0;
    for(int i=1;i<n;i++)
    {
        cin>>d[i];
        d[i] = (d[i]+d[i-1])%l;
    }

    vector<int>count(l,0);

    for(int i=0;i<n;i++)
    {
        count[d[i]]++;
    }
    int sol = 0;

    if(l%3==0){

        for(int i=0;i<=l/3;i++)
        {
            if(i+(l/3)<l && i+2*(l/3)<l)
                sol += count[i]*count[i+(l/3)]*count[i+2*(l/3)];
        }
    }
    cout<<sol<<"\n";

    return 0;
}