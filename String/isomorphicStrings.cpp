/*  Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for every character of str1 to every character of str2 while preserving the order.
    Note: All occurrences of every character in str1 should map to the same character in str2
    Input:
    str1 = aab
    str2 = xxy

    Output: 1
    Explanation: There are two different charactersin aab and xxy, i.e a and b with frequency 2 and 1 respectively */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool areIsomorphic(string s1, string s2)
    {
        int n=s1.length();
        int m=s2.length();
        
        int arr1[256] = {0};
        int arr2[256] = {0};
        
        if(n!=m){
            return false;
        }
        
        for(int i=0; i<n; i++){
            if(!arr1[s1[i]] && !arr2[s2[i]]){
                arr1[s1[i]]=s2[i];
                arr2[s2[i]]=s1[i];
            }
            else if(arr1[s1[i]] != s2[i]) return false;
        }
        return true;
    }
};

// TC = O(|str1|+|str2|)
// SC = O(Number of different characters)
// Note: |s| represents the length of string s

// GFG Q Link - https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1