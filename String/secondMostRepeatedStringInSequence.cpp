#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string,int>mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        int max=-1;
        int smax=-1;
        string ans="";
        for(auto it:mp){
            if(it.second>max){
                max=it.second;
            }
        }
        for(auto it:mp){
            if(it.second<max && it.second>smax){
                smax=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};

// TC = O(N*max(|Si|)
// SC = O(N*max(|Si|)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1