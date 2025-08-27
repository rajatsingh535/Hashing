#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;



vector<int> Pairs(vector<int>& arr , int k){
    int n = arr.size();
    unordered_map<int, int> hash;
    for(int i = 0; i < n ; i++){
        int complement =  k - arr[i];
        if (hash.find(complement)!= hash.end())
        {
            return {hash[complement],i};
        }
        hash[arr[i]] = i;

    }
}

int main()
{
    vector<int> arr = {2,7,1,12};
    int k = 9;
   
    vector<int> ans = Pairs(arr, k);
    for (int x : ans) {   
        cout << x << " ";
    }
    return 0;
}



