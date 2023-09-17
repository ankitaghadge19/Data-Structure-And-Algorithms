#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool areRotations(string s1,string s2)
    {
        int n=s1.length();
        int m=s2.length();
        if(m!=n){
            return 0;
        }
        
        string temp = s1+s1;
        if(temp.find(s2)!=string::npos){
            return 1;
        }
        else{
            return 0;
        }
    }
};

// TC = O(N)
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1