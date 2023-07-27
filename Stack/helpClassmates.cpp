//find the next smaller element for each element of the array

#include<bits/stdc++.h>
using namespace std;

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        stack<int> s;
        vector<int> ans(n);
        
        for(int i=n-1; i>=0; i--){
    
            while(!s.empty() and s.top()>=arr[i]){
                s.pop();
            }
            
            if(s.empty()){
                ans[i]=-1;
            }
            else{
                ans[i]=s.top();
            }
            s.push(arr[i]);
        }
        return ans;
    } 
};

// TC = O(N) 
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/fab3dbbdce746976ba35c7b9b24afde40eae5a04/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article