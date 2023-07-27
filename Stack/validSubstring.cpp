/* Given a string S consisting only of opening and closing parenthesis 'ie '('  and ')', 
find out the length of the longest valid(well-formed) parentheses substring.
NOTE: Length of the smallest valid substring ( ) is 2 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMaxLen(string s) {
       stack<char> t;
        int count = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                t.push(s[i]);
            }
            else if (!t.empty() && s[i] == ')' && t.top() == '('){
                count =count +2;
                t.pop();
            }
        }
        
        return count;
    }
};

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/valid-substring0624/1