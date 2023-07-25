#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>s;
        s.push(x[0]);
        
        for(int i=1; i<x.size(); i++){
            if(!s.empty()){
                if(x[i]=='(' and s.top()==')') s.pop();
                else if(x[i]==')' and s.top()=='(') s.pop();
                else if(x[i]=='{' and s.top()=='}') s.pop();
                else if(x[i]=='[' and s.top()==']') s.pop();
                else if(x[i]=='}' and s.top()=='{') s.pop();
                else if(x[i]==']' and s.top()=='[') s.pop();
                else s.push(x[i]);
            }
            else s.push(x[i]);
        }
        if(s.empty()) return true;
        return false;
    }

};

// TC = O(|x|) 
// SC = O(|x|)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1