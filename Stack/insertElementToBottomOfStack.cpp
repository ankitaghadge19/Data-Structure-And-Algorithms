#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

    void solve(stack<int>& st, int x){
        if(st.empty()){
            st.push(x);
            return;
        }

        int top = st.top();
        st.pop();
        solve(st, x);
        
        st.push(top);    
    }
    stack<int> insertAtBottom(stack<int> St, int X){      
        solve(St, X);
        return St;
    }
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article