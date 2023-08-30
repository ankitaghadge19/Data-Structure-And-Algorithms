#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:    
    vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
        vector<int> ans;
        map<int, int>a;
        for(int i=0; i<n1; i++){
            a[A[i]]++;
        }
        
        map<int, int>b;
        for(int i=0; i<n2; i++){
            b[B[i]]++;
        }
        
        map<int, int>c;
        for(int i=0; i<n3; i++){
            c[C[i]]++;
        }
        
        for(int i=0; i<n1; i++){
            if(a[A[i]] and b[A[i]] and c[A[i]]){
                ans.push_back (A[i]);
                a[A[i]]=0;
            }
        } 
        return ans;
    }
};

// TC = O(n1 + n2 + n3) 
// SC = O(n1 + n2 + n3)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/common-elements1132/1 