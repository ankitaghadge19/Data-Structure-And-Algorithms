#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(arr[i]>0){
                ans.push_back(arr[i]);
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i]<0){
                ans.push_back(arr[i]);
            }
        }
        for(int i=0; i<n; i++){
            arr[i]=ans[i];
        }
    }
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1