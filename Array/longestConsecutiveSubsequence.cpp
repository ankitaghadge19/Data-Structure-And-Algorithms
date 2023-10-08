/*
    Input: N = 7
    a[] = {2,6,1,9,4,5,3}
    Output: 6
    Explanation:
    The consecutive numbers here are 1, 2, 3, 4, 5, 6. 
    These 6 numbers form the longest consecutive subsquence.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int findLongestConseqSubseq(int arr[], int n){
      if(n==1){
          return 1;
      }
      int cnt=0, ans=0;
      sort(arr, arr+n);
      
      for(int i=0; i<n-1; i++){
          if(arr[i+1]-arr[i]==0){
              continue;
          }
          else if(arr[i+1]-arr[i]==1){
              cnt++;
              ans=max(cnt, ans);
          }
          else{
              cnt=0;
          }
      }
      return ans+1;
    }
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1