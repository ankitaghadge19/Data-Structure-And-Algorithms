#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    long long maxProduct(vector<int> arr, int n) {
	    long long int maxp = INT_MIN, prod = 1;
	    for(int i=0; i<n; i++){
	        prod = prod * arr[i];
	        maxp = max(maxp, prod);
	        if(prod == 0){
	            prod = 1;
	        }
	    }
	    
	    prod = 1;
	    for(int i=n-1; i>=0; i--){
	        prod = prod * arr[i];
	        maxp = max(maxp, prod);
	        if(prod == 0){
	            prod = 1;
	        }
	    }
	    return maxp;
	}
};

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1
// Soln Link  - https://www.youtube.com/watch?v=GbJh0MjUa5U