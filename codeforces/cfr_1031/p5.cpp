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

pair<int, pair<vector<int>, vector<int>>> maximize_distinct_sum(vector<int>& a, vector<int>& b) {
    int n = a.size();
    unordered_set<int> set_a, set_b;

    multiset<int> g1,g2;
    for(int i: a)
        g1.insert(i);
    for(int i: b)
        g2.insert(i);
    
    for(int i=0;i<n;i++)
    {
        if(g1.count(a[i])==1 || g2.count(b[i])==1)
            continue;
        else if(g1.count(a[i])>1 && g2.count(a[i])==0)
        {
            auto it = g1.find(a[i]);
            g1.erase(it);
            g2.insert(a[i]);
            g1.insert(b[i]);
            swap(a[i],b[i]);

        }
        else if(g2.count(b[i])>1 && g1.count(b[i])==0)
        {
            auto it = g2.find(b[i]);
            g2.erase(it);
            g1.insert(b[i]);
            g2.insert(a[i]);
            swap(a[i],b[i]);
        }
        else
            continue;
    }
    for(int i: a)
        set_a.insert(i);
    for(int i: b)
        set_b.insert(i);
    int total_unique = set_a.size() + set_b.size();
    return {total_unique, {a,b}};
}

int32_t main() {
    pujith22();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        auto result = maximize_distinct_sum(a, b);
        int max_distinct = result.first;
        vector<int> final_a = result.second.first;
        vector<int> final_b = result.second.second;

        cout << max_distinct << "\n";
        for (int val : final_a) cout << val << " ";
        cout<<"\n";
        for (int val : final_b) cout << val << " ";
        cout << endl;
    }
    return 0;
}