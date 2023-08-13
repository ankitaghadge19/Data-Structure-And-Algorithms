#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	// Function to check if array has 2 elements whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    map<int, int> mp;
	    
	    for(int i=0; i<n; i++){
	        int val = x-arr[i];
	        if(mp[val]){
	            return true;
	        }
	        mp[arr[i]]++;
	    }
	    return false;
	}
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/key-pair5616/0