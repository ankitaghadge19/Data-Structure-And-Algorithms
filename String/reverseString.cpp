#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string reverseWord(string str)
    {
        int s=0;
        int e=str.length()-1;
        while(s<e){
            swap(str[s], str[e]);
            s++;
            e--;
        }
        return str;
    }
};

// TC = O(|S|)
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/reverse-a-string/1