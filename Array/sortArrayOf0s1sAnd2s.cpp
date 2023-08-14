#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int low=0;
        int mid=0;
        int high=n-1;
        
        while(mid<=high){
            if(a[mid]==0){
                swap(a[mid], a[low]);
                low++;
                mid++;
            }
            else if(a[mid]==2){
                swap(a[mid], a[high]);
                high--;
            }
            else if(a[mid]==1){
                mid++;
            }
        }
    }
};

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/0