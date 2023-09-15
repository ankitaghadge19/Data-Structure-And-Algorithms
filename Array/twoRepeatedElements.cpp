#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> twoRepeated (int arr[], int n) {
        unordered_map<int, int> mp;
        vector<int>ans;
        
        for(int i=0; i<n+2; i++){
            mp[arr[i]]++;
            if(mp[arr[i]]==2){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/two-repeated-elements-1587115621/1?page=4&difficulty[]=0&category[]=Arrays&category[]=Strings&category[]=Linked%20List&sortBy=submissions