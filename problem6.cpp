#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int Subarray(vector<int>& arr , int k){
    int n = arr.size();
    unordered_map<int , int> map;
    int result = 0 , Cumsum = 0;
    map.insert({0,1});
    for (int i = 0; i < n; i++)
    {
        Cumsum += arr[i];
        if (map.find(Cumsum-k)!=map.end())
        {
            result += map[Cumsum-k];
        }

        map[Cumsum]++;
        
    }

    return result;
    
}


int main()
{
    vector<int> arr = {4,5,0,-2,-3,1};
    int k = 5;

    cout << Subarray(arr, k) << endl;

    return 0;
}
