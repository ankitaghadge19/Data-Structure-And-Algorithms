#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int min = A[0];
    	int max = A[0];
    	
    	for(int i = 0; i<N; i++){
    	    if(A[i]<min){
    	        min = A[i];
    	    }
    	    if(A[i]>max){
    	        max = A[i];
    	    }
    	}
    	int sum = max+min;
    	return sum;
    }
};

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/max-min/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article 