#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int, int> mp;
        int ans=0;
        for(int i=0; i<n; i++){
            int val = k-arr[i];
            if(mp[val]){
                ans = ans + mp[val];
            }
            mp[arr[i]]++;
        }
        return ans;
    }
};

// TC = O(N)
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/0