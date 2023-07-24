#include<bits/stdc++.h>
using namespace std;

class StackQueue{
private:   
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
};

//Function to push an element in queue by using 2 stacks.
void StackQueue :: push(int x)
{
    while(!s1.empty()){
        int val = s1.top();
        s1.pop();
        s2.push(val);
    }
    s1.push(x);
    while(!s2.empty()){
        int val = s2.top();
        s2.pop();
        s1.push(val);
    }
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        if(!s1.empty()){
        int val = s1.top();
        s1.pop();
        return val;
        }
        else{
            return -1;
        }
}

// Note :- If there is no element return -1 as answer while popping.

// TC = O(1) for push() and O(N) for pop() OR O(N) for push() and O(1) for pop()
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1