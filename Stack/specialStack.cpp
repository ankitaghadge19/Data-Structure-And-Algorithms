/* Q) Design a data-structure SpecialStack that supports all the stack operations like push(), pop(), isEmpty(), isFull() 
and an additional operation getMin() which should return minimum element from the SpecialStack. */

#include<bits/stdc++.h>
using namespace std;

int mini;

void push(stack<int>& s, int a){
    if(s.empty()){
        s.push(a);
        mini = a;
        return;
    }
    if(a<mini){
        s.push(2*a-mini);
        mini = a;
    }
    else{
        s.push(a);
    }
}

bool isFull(stack<int>& s,int n){
    if(s.size()==n) return true;
    return false;
}

bool isEmpty(stack<int>& s){
    if(s.empty()) return true;
    return false;
}

int pop(stack<int>& s){
    int temp = s.top();
    if(temp<mini){
        int val = 2*mini-temp;
        temp=val;
    }
    s.pop();
    return temp;
}

int getMin(stack<int>& s){
    return mini;
}

// TC = O(1) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/special-stack/1