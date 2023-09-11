#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int firstNonRepeating(int arr[], int n) { 
        unordered_map <int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        } 
        for(int i=0; i<n; i++){
            if(mp[arr[i]]==1){
                return arr[i];
            }
        }
    } 
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/non-repeating-element3958/1