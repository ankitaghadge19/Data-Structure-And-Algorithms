// Kadane's Algorithm

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	long long maxSubarraySum(int arr[], int n){  
        long long maxSum=arr[0];
        long long sum=0;
        for(int i=0; i<n; i++){
            sum += arr[i];
            maxSum = max(maxSum, sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxSum;
    }
};

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1