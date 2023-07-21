#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int> s;
        
        while(!q.empty()){
            int element = q.front();
            q.pop();
            s.push(element);
        }
        
        while(!s.empty()){
            int element = s.top();
            s.pop();
            q.push(element);
        }
        return q;
    }
};

// TC = O(n) 
// SC = O(n)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/queue-reversal/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article