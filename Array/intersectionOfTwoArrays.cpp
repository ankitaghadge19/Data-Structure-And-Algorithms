#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return the count of the number of elements in the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        unordered_map<int, int>map;
        unordered_set<int>set;
        for(int i = 0;i<n;i++){
            map[a[i]]++;
        }
        for(int i= 0;i<m;i++){
            if(map[b[i]]){
                set.insert(b[i]);
            }
        }
        return set.size();
    }
};

// TC = O(n + m) 
// SC = O(min(n,m))

// GFG Q Link - https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1