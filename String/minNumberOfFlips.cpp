#include<bits/stdc++.h>
using namespace std;

int minFlips (string s){
    int cnt1=0;
    int cnt2=0;
    
    for(int i=0; i<s.length(); i++){
        if(i%2==0){
            if(s[i]=='1'){
                cnt1++;
            }
            if(s[i]=='0'){
                cnt2++;
            }
        }
        else{
            if(s[i]=='1'){
                cnt2++;
            }
            if(s[i]=='0'){
                cnt1++;
            }
        }
    }
    return min(cnt1, cnt2);
}

// TC = O(|S|)
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1