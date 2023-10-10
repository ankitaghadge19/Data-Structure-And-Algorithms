#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int countOccurence(int arr[], int n, int k) {
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        int cnt=0;
        for(auto it: mp){
            if(it.second > (n/k)){
                cnt++;
            }
        }
        return cnt;
    }
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/count-element-occurences/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article