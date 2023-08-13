/* Given a non-negative number represented as a list of digits, 
add 1 to the number (increment the number represented by the digits). 
The digits are stored such that the most significant digit is first element of array */

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int n) {
        for(int i=n-1; i>=0; i--){
            if(arr[i]<9){
                arr[i]++;
                return arr;
            }
            else{
                arr[i]=0;
            }
        }
        arr.insert(arr.begin(), 1);
        return arr;
    }
};

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/plus-one/1?page=21&category[]=Arrays&sortBy=difficulty