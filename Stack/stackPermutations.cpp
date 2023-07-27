/* You are given two arrays A and B of unique elements of size N. 
Check if array B is a stack permutation of the array A or not.
Stack permutation means that array B can be created from array A using a stack and stack operations */

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        int i=0;
        int j=0;
        stack<int>st;
        
        while(i<N){
            st.push(A[i]);
            while(!st.empty() and j<N and st.top()==B[j]){
                st.pop();
                j++;
            }
            i++;
        }
        
        if(st.empty()) return 1;
        return 0;
    }
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/stack-permutations/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article