/* Given an array A of positive integers. 
Your task is to find the leaders in the array. 
An element of array is leader if it is greater than or equal to all the elements to its right side. 
The rightmost element is always a leader. 

Input:
n = 6
A[] = {16,17,4,3,5,2}

Output: 17 5 2

Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included */

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	vector<int> leaders(int a[], int n){
        vector<int>ans;
        ans.push_back(a[n-1]);
        int max = a[n-1];
        for(int i=n-2; i>=0; i--){
            if(a[i]>=max){
                ans.push_back(a[i]);
                max=a[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans; 
    }
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&sortBy=submissions