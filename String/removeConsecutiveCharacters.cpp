#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string removeConsecutiveCharacter(string s){
        string temp=s+"#";
        string ans="";
        int i;
        for(i=0; i<temp.size(); i++){
            if(s[i]!=s[i+1]){
                ans=ans+s[i];
            }
        }
        return ans;
    }
};

// TC = O(|S|) 
// SC = O(|S|)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/consecutive-elements2306/1