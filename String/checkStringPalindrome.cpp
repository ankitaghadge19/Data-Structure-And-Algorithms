#include<bits/stdc++.h>
using namespace std;

class Solution
{
    int isPalindrome(string str){
	    int n=str.length();
	    int s=0;
	    int e=n-1;
	    
	    while(s<e){
	        if(str[s]!=str[e]){
	            return 0;
	        }
	        s++;
	        e--;
	    }
	    return 1;
	}
};

// TC = O(|S|)
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/palindrome-string0817/1