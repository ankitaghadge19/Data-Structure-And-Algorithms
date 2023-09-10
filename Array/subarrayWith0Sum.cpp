#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_map <int, int> mp;
        int sum=0;
        mp[0]++;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(mp.find(sum)!=mp.end()){
                return true;
            }
            mp[sum]++;
        }
        return false;
    }
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1