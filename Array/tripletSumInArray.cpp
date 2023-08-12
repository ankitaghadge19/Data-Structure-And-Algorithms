/* Given an array arr of size n and an integer X. 
Find if there's a triplet in the array which sums up to the given integer X */

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool find3Numbers(int A[], int n, int x)
    {
        sort(A, A+n);
        for(int i=0; i<n; i++){
            int start=i+1;
            int end = n-1;
            while(start<end){
                int tripletSum = A[i]+A[start]+A[end];
                if(tripletSum==x) return true;
                else if(tripletSum>x) end--;
                else start++;
            }
        }
        return false;
    }
};

// TC = O(N^2) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article