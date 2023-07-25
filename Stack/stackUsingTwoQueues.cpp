#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        q1.push(x);
        while(!q2.empty()){
            int val = q2.front();
            q2.pop();
            q1.push(val);
        }
        
        while(!q1.empty()){
            int val = q1.front();
            q1.pop();
            q2.push(val);
        }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        if(!q2.empty()){
            int val = q2.front();
            q2.pop();
            return val;
        }
        else{
            return -1;
        }
}

// TC = O(1) for push() and O(N) for pop() (or vice-versa)
// SC = O(1) for both push() and pop()

// GFG Q Link - https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
