#include<bits/stdc++.h>
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
}

int sol(vector<int>&arr)
{
    int n = arr.size();
    //if xor of the sub array is 0, then we can reduce it with length - 1 steps otherwise we can reduce it with length steps
    int total_cost = (((n * (n + 1)) / 2) * (n + 2)) / 3; 
    map<int,int> m;

    int zero_xor_subarray_count = 0;
    int curr_prefix_xor = 0;
    m[0] = 1;
    for(int i=0;i<arr.size();i++)
    {
        curr_prefix_xor ^= arr[i];
        if(m.count(curr_prefix_xor))
            zero_xor_subarray_count += m[curr_prefix_xor];
        m[curr_prefix_xor]++;
    }

    int extra_subtraction = 0;
    
    // We iterate through the array, identifying blocks of consecutive zeros.
    int i = 0;
    while (i < n) {
        if (arr[i] == 0) {
            int j = i;
            while (j < n && arr[j] == 0) {
                j++;
            }
            // Block of zeros A[i...j-1] has length L = j - i.
            int L = j - i;
            
            // In a block of length L, the number of contiguous subarrays is L(L+1)/2.
            // The sum of lengths of all those L(L+1)/2 subarrays is L(L+1)(L+2)/6.
            // The number of all-zero subarrays (N_zero_only) is L(L+1)/2.
            
            // The sum of (m-1) for all all-zero subarrays in this block is:
            // S_len(L) - N_zero_only(L)
            int block_S_len = (L * (L + 1) * (L + 2)) / 6;
            int block_N_count = (L * (L + 1)) / 2;
            
            extra_subtraction += (block_S_len - block_N_count);
            
            i = j; // Move to the end of the zero block
        } else {
            i++;
        }
    }
    return total_cost - zero_xor_subarray_count - extra_subtraction;
}


int32_t main()
{
    pujith22();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int k=0;k<n;k++)
            cin>>arr[k];
        cout<<"Case #"<<i<<": "<<sol(arr)<<"\n";
    }
    return 0;
}