#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int binarySearch(int ele, int arr[], int n){
        int low=0, high=n-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]<=ele){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], int m, int n){
        sort(arr2, arr2+n);
        vector<int>ans;
        
        for(int i=0; i<m; i++){
            ans.push_back(binarySearch(arr1[i], arr2, n));    
        }
        return ans;
    }
};

// TC = O(M+N) 
// SC = O(M)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/counting-elements-in-two-arrays/1?page=5&difficulty[]=1&category[]=Arrays&category[]=Strings&category[]=Linked%20List&sortBy=submissions

//Soln Link: https://www.youtube.com/watch?v=WijiyOwTrYA