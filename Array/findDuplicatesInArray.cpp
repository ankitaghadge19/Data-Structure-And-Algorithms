/* Given an array a[] of size N which contains elements from 0 to N-1, 
you need to find all the elements occurring more than once in the given array. 
Return the answer in ascending order */

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        unordered_map <int, int> mp;
        vector<int> ans;
        
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        for(auto it: mp){
            if(it.second > 1){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.empty()){
            ans.push_back(-1);
        }
        return ans;
    }
};

// TC = O(n)
// SC = O(n)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1