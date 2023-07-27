/* Given a string s of lowercase alphabets and a number k, 
the task is to print the minimum value of the string after removal of k characters. 
The value of a string is defined as the sum of squares of the count of each distinct character */

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minValue(string s, int k){
        unordered_map<char, int> m;
        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }
        
        priority_queue<int> q;
        for(auto x:m){
            q.push(x.second);
        }
        
        while(k!=0){
            int x=q.top();
            q.pop();
            x--;
            q.push(x);
            k--;
        }
        
        int sum = 0;
        while(!q.empty()){
            int val = q.top();
            q.pop();
            sum=sum+(val*val);
        }
        return sum;
    }
};

// TC = O(N+Klog(P)) where N is the length of string and P is number of distinct alphabets and K number of alphabets to be removed 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/game-with-string4100/1