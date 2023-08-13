/* Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. 
Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted. 
There can be duplicate elements */

#include<bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[a1[i]]++;
    }
    
    for(int i=0;i<m; i++){
        int val = a2[i];
        if(!mp[val]){
            return "No";
        }
        else{
            mp[val]--;
        }
    }
    return "Yes";
}

// TC = O(max(n,m))
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1?page=18&category[]=Arrays&sortBy=difficulty