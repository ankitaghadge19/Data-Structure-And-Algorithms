#include<bits/stdc++.h>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k) {
    
    //push 1st k element in stack
    stack<int> s;
    
    for(int i=0; i<k; i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    //pop elements from stack and push into q
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
    //fetch (n-k) element from q and push again
    int t = q.size()-k;
    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}

// TC = O(n) 
// SC = O(k)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

