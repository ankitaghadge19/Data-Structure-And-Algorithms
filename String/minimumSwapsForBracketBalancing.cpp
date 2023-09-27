// Swapping only adjacent brackets

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int minimumNumberOfSwaps(string s){
        int ans=0, val=0;
       
        for(int i=0; i<s.length(); i++){
            char ch=s[i];
            if(ch=='['){
                val++;
            }
            else{
                val--;
                if(val<0){
                    ans=ans-val;
                }
            }
        }
        return ans;
    }
};

// TC = O(N)
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/minimum-swaps-for-bracket-balancing2704/1