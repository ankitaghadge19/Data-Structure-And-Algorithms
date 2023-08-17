#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        sort(array.begin(), array.end());
        for(int i=0; i<n; i++){
            if(!(array[i]==i+1)){
                return i+1;
            }
        }
    }
};

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=11&category[]=Arrays&sortBy=difficulty