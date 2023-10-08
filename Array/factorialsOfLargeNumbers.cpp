#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int calculate(vector<int> &ans, int x){
        int carry=0;
        
        for(int i=0; i<ans.size(); i++){
            int prod=(ans[i]*x) + carry;
            ans[i]= prod%10;
            carry = prod/10;
        }

        while(carry){
            ans.push_back(carry%10);
            carry /= 10;
        }
    }
    vector<int> factorial(int N){
        vector<int> ans;
        
        ans.push_back(1);
        
        for(int i=2; i<=N; i++){
            calculate(ans, i);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// TC = O(N^2) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/0 
// Soln Link  - https://www.youtube.com/watch?v=fF131gnswZ4