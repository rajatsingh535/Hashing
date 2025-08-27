#include<bits/stdc++.h>
using namespace std;

int Count(vector<int>& nums, int key){
    
    unordered_map<int , int> mpp;
    int count = 0;
    
    for(int i = 0 ; i < nums.size() ; i++){
        
        int element = key - nums[i];
        
        if(mpp.find(element) != mpp.end()){
            
            count += mpp[element];
        }
         mpp[nums[i]]++;
    }
    
    
    return count;
    
}
