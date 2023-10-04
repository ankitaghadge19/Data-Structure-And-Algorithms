#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    void rearrange(int arr[], int N) {
	    vector<int> positive;
	    vector<int> negative;
	    
	    for(int i=0; i<N; i++){
	        if(arr[i]<0){
	            negative.push_back(arr[i]);
	        }
	        else{
	            positive.push_back(arr[i]);
	        }
	    }
	    
	    int p=0, n=0;
	    int k=0;
	    
	    while(p<positive.size() and n<negative.size()){
	        if(k%2==0){
	            arr[k]=positive[p];
	            p++;
	        }
	        else{
	            arr[k]=negative[n];
	            n++;
	        }
	        k++;
	    }
	    
	    if(p<positive.size()){
	        while(p<positive.size()){
	            arr[k]=positive[p];
	            k++;
	            p++;
	        }
	    }
	    
	    if(n<negative.size()){
	        while(n<negative.size()){
	            arr[k]=negative[n];
	            k++;
	            n++;
	        }
	    }
	}
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/0