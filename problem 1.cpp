

// Optimal approach using Hashmap
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[5] = {3,1,2,3,2};
     int k = 2;
    unordered_map<int, int> mp; 
    bool found = false;

    for (int i = 0; i < 5; i++)
    {
        if (mp.find(arr[i])!=mp.end())
        {
            int prevIdx = mp[arr[i]];
            if(i-prevIdx<=k) { 
                 cout << i + 1 << ","<< prevIdx+1;
                found = true;
                break;
            }


        }

        mp[arr[i]] = i; 
   
    }

    if (!found) {
        cout << -1 << endl;
    }
    
    return 0;
}

