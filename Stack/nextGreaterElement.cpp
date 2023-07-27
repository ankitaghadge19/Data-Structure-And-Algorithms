#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        
        stack<long long> s;
        vector<long long> ans (n);
        
        for(int i=n-1; i>=0; i--){
            
            while(!s.empty() and s.top() <= arr[i]){
               s.pop();
            }
            
            if(s.empty())
                ans[i] = -1;
            else
                ans[i] = s.top();
                
            s.push(arr[i]);
        }
        return ans;
    }
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1