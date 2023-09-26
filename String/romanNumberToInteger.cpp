#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int romanToDecimal(string &str) {
        unordered_map<char, int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        
        int len=str.length();
        int max=0;
        int ans=0;
        for(int i=len-1; i>=0; i--){
            int num = mp[str[i]];
            if(num>=max){
                ans=ans+num;
                max=num;
            }
            else{
                ans=ans-num;
            }
        }
        return ans;
    }
};

// TC = O(|S|)
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1