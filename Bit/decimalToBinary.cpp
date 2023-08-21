#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    void toBinary(int N){
        int ans=0, i=0;
        while(N!=0){
            int bit = N&1;
            ans = (bit * pow(10, i)) + ans;
            N=N>>1;
            i++;
        }
        cout<<ans;
    }
};

// TC = O(log(n)) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/decimal-to-binary-1587115620/0