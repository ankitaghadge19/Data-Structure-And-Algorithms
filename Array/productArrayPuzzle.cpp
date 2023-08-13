/* Given an array nums[] of size n, 
construct a Product Array P (of same size n) 
such that P[i] is equal to the product of all the elements of nums except nums[i] */


//----------------------------without using the division operation--------------------------------------//
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        vector<long long int> left(n), right(n);
       
        left[0]=1;
        right[n-1]=1;
       
        for(int i=1; i<n; i++){
            left[i] = left[i-1] * nums[i-1];
        }
       
        for(int i=n-2; i>=0; i--){
            right[i] = right[i+1] * nums[i+1];
        }
       
        for(int i=0; i<n; i++){
            nums[i] = left[i] * right[i];
        }
        return nums;     
    }
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1?page=11&category[]=Arrays&sortBy=difficulty