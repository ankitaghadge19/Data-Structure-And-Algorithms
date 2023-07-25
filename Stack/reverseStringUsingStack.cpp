#include<bits/stdc++.h>
using namespace std;

//return the address of the string
char* reverse(char *S, int len)
{
    stack<char> stk;
    
    for(int i=0; i<len; i++){
        stk.push(S[i]);
    }
    
    for(int i=0; i<len; i++){
        S[i]=stk.top();
        stk.pop();
    }
    return S;
}

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1