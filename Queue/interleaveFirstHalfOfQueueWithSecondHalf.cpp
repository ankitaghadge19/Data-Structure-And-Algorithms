#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        stack<int> s;
        int n = q.size();
        int m = n/2;
        
        for(int i=0; i<m; i++){
            int val = q.front();
            q.pop();
            s.push(val);
        }
        
        for(int i=0; i<m; i++){
           int val = s.top();
           s.pop();
           q.push(val);
        }
        
        for(int i=0; i<m; i++){
            int val = q.front();
            q.pop();
            q.push(val);
        }
        
        for(int i=0; i<m; i++){
            int val = q.front();
            q.pop();
            s.push(val);
        }
        
        vector<int> ans;
        while(!s.empty()){
          ans.push_back(s.top());
          s.pop();
          ans.push_back(q.front());
          q.pop();
        }
        return ans;
    }
};

// TC = O(N)
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/0