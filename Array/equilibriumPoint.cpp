/* 
    Equilibrium point in an array is an index (or position) such that 
    the sum of all elements before that index is same as sum of elements after it.

    Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists.
*/ 

#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int equilibriumPoint(long long a[], int n) {
    
        int right=0;
        for(int i=0; i<n; i++){
            right=right+a[i];
        }
        int left=0;
        for(int i=0; i<n; i++){
            right=right-a[i];
            if(right==left){
                return i+1;
            }
            left=left+a[i];
        }
        return -1;
    }
};

/*
    Input:  n = 5 
    A[] = {1,3,5,2,2} 
    Output: 3 
    Explanation:  
    equilibrium point is at position 3 as sum of elements before it (1+3) = sum of elements after it (2+2). 
*/

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1?page=1&sortBy=submissions