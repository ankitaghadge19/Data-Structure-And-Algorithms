#include<bits/stdc++.h>
using namespace std;

int countRev (string s)
{
    int n=s.length();

    if(n&1){         // if length of string is odd
        return -1;
    }
    else{
        stack<char> st;
        int c=0;    // count opening brackets
        int c2=0;   // count closing brackets
        for(int i=0; i<n; i++){
            char ch=s[i];
            if(ch=='{'){
                st.push(ch);
                c++;
            }
            else if(!st.empty() and ch=='}' and st.top()=='{'){
                st.pop();
                c--;
            }
            else c2++;
        }
        
        // if(num & 1) then (num is odd)
        // let c=5, {{ {{{ or let c=4. {{ {{
        if(c&1){
            c=(c/2)+1;
        }
        else{
            c=c/2;
        }
        // let c2=5, }} }}} or let c2=4, }} }}
        if(c2&1){
            c2=(c2/2)+1;
        }
        else{
            c2=c2/2;
        }
        /* 
            c and c2 both either will be odd or even
            if c and c2 both are odd: {{{ }}} 
            for {{{, c=(3/2) + 1=2;
            for }}}, c2=(3/2) + 1=2;
            No of reversal = c+c2 = 4;
            
            Input:
            S = "}}{{"
            Output: 2
            
            Input:
            S = "}}}{{{"
            Output: 4
        */
        return (c+c2);
    }
}

// TC = O(|S|)
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/count-the-reversals0401/1