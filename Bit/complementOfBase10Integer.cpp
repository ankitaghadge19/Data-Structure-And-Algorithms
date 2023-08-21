#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
   int bitwiseComplement(int n) {
        int mask=0;
        int m = n;

        if(n==0) return 1;
        
        while(m!=0){
            mask= (mask<<1)|1;
            m = m>>1;
        }
        int ans = (~n) & mask;
        return ans;
    }
};

// TC = O(log(n) 
// SC = O(log(n))

// GFG Q Link - https://leetcode.com/problems/complement-of-base-10-integer/description/