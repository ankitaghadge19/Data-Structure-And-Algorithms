#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int binary_to_decimal(string str) {
        int n = str.length();
        int ans=0;
        int power=0;
        for(int i=n-1; i>=0; i--){
            if(str[i]=='1'){
                ans = ans + pow(2,power);
            }
            power++;
        }
        return ans;
    }
};

// TC = O(K * Log(K)) where K is number of bits in binary number 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/binary-number-to-decimal-number3525/0