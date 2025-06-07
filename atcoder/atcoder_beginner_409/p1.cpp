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

bool func(string a,string b)
{
    for(int i=0;i<a.size();i++)
        if(a[i]=='o' && b[i]=='o')
            return true;
    return false;
}

int32_t main()
{
    pujith22();
    int n;
    string t,a;
    cin>>n>>t>>a;
    cout<<(func(t,a)?"Yes":"No")<<"\n";
    return 0;
}