/* Given a string of balanced expression, find if it contains a redundant parenthesis or not. 
A set of parenthesis are redundant if the same sub-expression is surrounded by unnecessary or multiple brackets. 
Print Yes if redundant, else No.
Note: Expression may contain + , - , *, and / operators. Given expression is valid and there are no white spaces present */

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int checkRedundancy(string s) {
    
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        if(ch=='(' || ch=='+' || ch=='/' || ch=='-' || ch=='*'){
            st.push(ch);
        }
        else
        {
            if(ch==')')
            {
                bool isRedundant = true;
                
                while(st.top()!='(')
                {
                    char top = st.top();
                    if(top=='+' || top=='/' || top=='-' || top=='*'){
                        isRedundant=false;
                    }
                    st.pop();
                }
                
                if(isRedundant == true)
                    return true;
                st.pop();
            }
        }
    }
    return false;
  }
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/e015cb4d3f354b035d9665e7c8a54a7aefb1901b/0