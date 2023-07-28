#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to delete middle element of a stack.
    
    void deleteMid(stack<int>&st, int cnt, int &pos){
        if(st.empty()) return;
        if(cnt==pos){
            st.pop();
            return;
        }
        
        int top = st.top();
        st.pop();
        deleteMid(st, cnt+1, pos);
        
        st.push(top);
        
    }
    void deleteMid(stack<int>&s, int size)
    {
        int pos=ceil((size+1)/2.0);
        deleteMid(s, 1, pos);
    }
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1