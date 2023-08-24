/* Given a string with brackets ('[' and ']') and the index of an opening bracket. 
Find the index of the corresponding closing bracket.
eg: Input:
    S = "[ABC[23]][89]"
    pos = 0
    Output: 8
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int closing (string s, int pos)
        {
        	stack<int> st;
            
            for(int i=0; i<s.size(); i++){
                    if(s[i]=='['){
                       st.push(i);
                    }
                    else if(s[i]==']'){
                        if(st.top()==pos){
                            return i;
                        }
                        else{
                            st.pop();
                        }
                    }    
            }
            return -1;
        }
};

// TC = O(|S|) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/closing-bracket-index5900/1?page=9&category[]=Strings&sortBy=difficulty