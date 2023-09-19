/* Given an integer n. Return the nth row of the following look-and-say pattern.
    1
    11
    21
    1211
    111221
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    string lookandsay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string s="11";
        for(int i=3; i<=n; i++){
            string t="";
            s=s+'#';
            int c=1;
            for(int j=1; j<s.length(); j++){
                if(s[j]!=s[j-1]){
                    t=t+to_string(c);
                    t=t+s[j-1];
                    c=1;
                }
                else{
                    c++;
                }
            }
            s=t;
        }
        return s;
    }   
};

// TC = O(2^n)
// SC = O(2^(n-1))

// GFG Q Link - https://practice.geeksforgeeks.org/problems/decode-the-pattern1138/1

/* Input:
    n = 5
   Output: 111221
   Explanation: The 5th row of the given pattern will be 111221
*/