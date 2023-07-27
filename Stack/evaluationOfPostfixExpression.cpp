/* Given string S representing a postfix expression, the task is to evaluate the expression and find the final value. 
Operators will only include the basic arithmetic operators like *, /, + and - */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int> st;
        int a;
        int b;
        int temp;
        for(int i=0; i<S.length(); i++){
            
            if(S[i]=='*' || S[i]=='/' || S[i]=='+' || S[i]=='-'){
                
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                
                if(S[i]== '*' ){
                    temp = b * a;
                    st.push(temp);
                }
                else if(S[i]=='/'){
                    temp = b / a;
                    st.push(temp);
                }
                else if(S[i]=='+'){
                    temp = b + a;
                    st.push(temp);
                }
                else if(S[i]=='-'){
                    temp = b - a;
                    st.push(temp);
                }

            } else {
                if(S[i]>='0' && S[i]<='9'){
                    
                //S[i] is a character and stack store integer value. when we minus 0's ASCII value from any char then you will get its integer value.    
                st.push(S[i]-'0');
                }
            } 
        }
        return st.top();
    }
};

// TC = O(|S|) 
// SC = O(|S|)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1