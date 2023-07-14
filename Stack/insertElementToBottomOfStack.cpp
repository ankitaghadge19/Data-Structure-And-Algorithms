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