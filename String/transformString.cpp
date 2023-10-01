#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int transform (string A, string B){
        int m=A.length();
        int n=B.length();
        int s1=0, s2=0;
        if(m!=n){
            return -1;
        }
        
        vector<int>freq(256,0);
        for(int i=0;i<n;i++){
            freq[A[i]]++;
            freq[B[i]]--;
        }
        for(int i=0;i<256;i++){
            if(freq[i]!=0)
            return -1;
        }
        
        int i=m-1;
        int j=n-1;
        int count=0;
        while(i>=0 && j>=0){
            if(A[i]==B[j]){
                i--;
                j--;
            }
            else{
                count++;
                i--;
            }
        }
        return count;
    }
};

// TC = O(N) where N is max(length of A, length of B) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/transform-string5648/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article