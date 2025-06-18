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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        arr[i]=i+1;
    int ptr = 0;
    while(q--)
    {
        int a,b,c;
        cin>>a>>b;
        if(a==1)
            cin>>c;
        if(a==1)
        {
            b--;
            arr[(ptr+b+n)%n]=c;
            //cout<<arr[(ptr+b+n)%n]<<"\n";
        }
        else if(a==2)
        {
            b--;
            cout<<arr[(ptr+b+n)%n]<<"\n";
        }
        else
        {
            ptr = (ptr+b+n)%n;
        }
    }
    return 0;
}