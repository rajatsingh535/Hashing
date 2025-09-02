#include <bits/stdc++.h>
using namespace std;

pair<int,int> largestSubarrayandSmallestSubarray(vector<int>& arr, int k) {
    unordered_map<int,int> mp;
    int prefix_sum = 0, max_len = 0 , min_len = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        prefix_sum += arr[i];

        if (prefix_sum == k) {
            max_len = max(max_len, i + 1);
            min_len = min(min_len, i + 1);
        }

        
        if (mp.find(prefix_sum - k) != mp.end()) {
            max_len = max(max_len, i - mp[prefix_sum - k]);
            min_len = min(min_len, i - mp[prefix_sum - k]);
        }

      
        if (mp.find(prefix_sum) == mp.end()) {
            mp[prefix_sum] = i;
        }
    }

    if (min_len == INT_MAX) min_len = 0; 
    return {max_len, min_len};
}

int main() {
    int n, k;
    cin >> n >> k;   

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pair<int,int> ans = largestSubarrayandSmallestSubarray(arr, k);

    cout << "Largest Subarray Length = " << ans.first << endl;
    cout << "Smallest Subarray Length = " << ans.second << endl;

    return 0;
}


