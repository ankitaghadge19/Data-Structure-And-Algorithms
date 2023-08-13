/* Given an ascending sorted rotated array Arr of distinct integers of size N. 
The array is right rotated K times. Find the value of K */

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int findKRotation(int arr[], int n){
	    int i=0;
	    int j=n-1;
	    int cnt=0;
	    
	    while(i<j){
	        if(arr[i]>arr[j]){
	            i++;
	            cnt++;
	        }
	        else{
	            break;
	        }
	    }
	    return cnt;
	}
};

// TC = O(log(N)) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/rotation4723/1?page=13&category[]=Arrays&sortBy=difficulty