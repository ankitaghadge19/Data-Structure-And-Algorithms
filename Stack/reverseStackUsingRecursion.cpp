#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void insertAtBottom(stack<int> &st, int elem){
        if(st.empty()){
            st.push(elem);
            return;
        }
        
        int top = st.top();
        st.pop();
        
        insertAtBottom(st, elem);
        
        st.push(top);
    }

    void Reverse(stack<int> &St){
        if(St.empty()) return;
        
        int num = St.top();
        St.pop();
        
        Reverse(St);
        
        insertAtBottom(St, num);
        
    }
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/reverse-a-stack/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article