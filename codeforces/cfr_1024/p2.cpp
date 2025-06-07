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

bool func(vector<int> arr,int ele)
{
    int strictlyGreater = 0;
    int flexiblyGreater = 0;
    int strictlyLess = 0;
    int flexiblyLess = 0;
    int greater = 0;
    int lesser = 0;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]>ele && -arr[i]>ele)
            strictlyGreater++;
        else if(arr[i]>ele && -arr[i]<ele)
            flexiblyGreater++;
        if(arr[i]<ele && -arr[i]<ele)
            strictlyLess++;
        else if(arr[i]<ele && -arr[i]>ele)
            flexiblyLess++;
        if(arr[i]>ele)
            greater++;
        else
            lesser++;
    }
    int n = arr.size();
    int diff = greater-lesser;
    if(n%2==1)
    {
        if(diff==0)
            return true;
        if(diff>0)
        {
            if(diff%2!=0)
                return false;
            if(flexiblyGreater<diff/2)
                return false;
            else
                return true;
        }
        else if(diff<0)
        {
            diff = -diff;
            if(diff%2!=0)
                return false;
            if(flexiblyLess<diff/2)
                return false;
            else
                return true;
        }
    }
    else
    {
        if(diff==1)
            return true;
        diff-=1;
        if(diff>0)
        {
            if(diff%2!=0)
                return false;
            if(flexiblyGreater<diff/2)
                return false;
            else
                return true;
        }
        else if(diff<0)
        {
            diff = -diff;
            if(diff%2!=0)
                return false;
            if(flexiblyLess<diff/2)
                return false;
            else
                return true;
        }
    }
    return false;
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
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(func(a,a[0]) || func(a,-a[0])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}