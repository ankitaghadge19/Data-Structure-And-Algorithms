#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    
    void solve(vector<long long>& arr, int n, int start, int end){
        
            while(start<end){
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
    }
    
    void reverseInGroups(vector<long long>& arr, int n, int k){
        
       for(int i=0; i<n; i+=k){
           if(i+k-1 < n){
               solve(arr, n, i, i+k-1);
           }
           else{
               solve(arr, n, i, n-1);
           }
       }
    }
};


// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1