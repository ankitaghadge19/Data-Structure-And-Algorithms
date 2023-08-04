#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int search(int arr[], int n, int k) {
	    for(int i=0; i<n; i++){
	        if(arr[i]==k){
	            return i+1;
	        }
	    }
	    return -1;
	}
};

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/searching-a-number0324/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article