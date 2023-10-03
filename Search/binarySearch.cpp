#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int binarysearch(int arr[], int n, int k) {
        int s = 0;
        int e = n-1;
        int mid;
        
        while(s<=e){
            mid = s+(e-s)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(k<arr[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
    }
};

// TC = O(LogN) 
// SC = O(LogN) if solving recursively and O(1) otherwise.

// GFG Q Link - https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1&sortBy=submissions