#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution{
    public:

    bool check(vector<ll> A, vector<ll> B, int N) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<N;i++){
            if (A[i]!=B[i]) return false;
        }
        return true;
    }
    
    //----------------Another solution using Map--------------------//
    
    bool check(vector<ll> A, vector<ll> B, int N) {
        if(A.size()!=B.size()){
            return false;
        }

        map<int, int> mp;
        for(int i=0; i<N; i++){
           mp[A[i]]++; 
        }
        
        for(int i=0; i<N; i++){
            if(mp[B[i]]>0){
                mp[B[i]]--;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
};

// TC = O(N)
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=2&category[]=Arrays&category[]=Design-Pattern&sortBy=difficulty