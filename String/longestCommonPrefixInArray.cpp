#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string longestCommonPrefix (string arr[], int n){
        int flag=0, count=0;
        int min=INT_MAX;
        string s;
        for(int i=0; i<n; i++){
            int len=arr[i].length();
            if(len<min){
                min=len;
                s=arr[i];
            }
        }
        
        for(int i=0; i<min; i++){
            for(int j=0; j<n; j++){
                if(arr[j][i] != s[i]){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                break;
            }
            count++;
        }
        
        if(count==0){
            return "-1";
        }
        else{
            return s.substr(0,count);
        }
    }
};

// TC = O(N*min(|arr|))
// SC = O(min(|arr|)) for result

// GFG Q Link - https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article