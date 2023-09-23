#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubStr(string str){
        int x=0;
        int y=0;
        int cnt=0;
        
        for(int i=0; i<str.length(); i++){
            if(str[i]=='0'){
                x++;
            }
            else{
                y++;
            }
            if(x==y){
                cnt++;
            }
        }
        if(x!=y){
            return -1;
        }
        return cnt;
    }
};

// TC = O(N)
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/split-the-binary-string-into-substrings-with-equal-number-of-0s-and-1s/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article