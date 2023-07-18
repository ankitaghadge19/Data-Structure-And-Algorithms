/* You are given N elements and your task is to Implement a Stack in which you can get a minimum element in O(1) time */

#include<bits/stdc++.h>
using namespace std;

class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};

class Solution{
    int minEle;
    stack<int> s;
    public:
    
       int getMin(){
           if(s.empty()) return -1;
           return minEle;
       }
       
       /*returns poped element from stack*/
       int pop(){
           if(s.empty()) return -1;
           
           int del = s.top(),top = s.top();
           s.pop();
           if(del < minEle){
               del = minEle;
               minEle = 2*minEle - top;
           }
           return del;
       }
       
       /*push element x into the stack*/
       void push(int x){
           if(s.empty()){
               minEle = x;
               s.push(x);
           }else{
               if(x<minEle){
                   s.push(2*x - minEle);
                   minEle = x;
               }else{
                   s.push(x);
               }
           }
       }
};

// TC = O(1) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article