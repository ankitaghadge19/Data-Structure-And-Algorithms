#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int print2largest(int arr[], int n) {
	    int first=arr[0], second=-1;
	    for(int i=1; i<n; i++){
	        if(arr[i]>first){
	            second=first;
	            first=arr[i];
	        }
	        else if(arr[i]>second and arr[i]!=first){
	            second=arr[i];
	        }
	    }
	    return second;
	}
};

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/second-largest3735/1?page=1&sortBy=submissions