#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int kthSmallest(int arr[], int l, int r, int k) {
        int n=r+1;
        sort(arr, arr+n);
        return arr[k-1];
        for(int i=l; i<=r; i++){
            if(k==i+1){
                return arr[i];
            }
        }
    }
};

// TC = O(N) 
// SC = O(log(N))

// GFG Q Link - https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1?page=1&sortBy=submissions