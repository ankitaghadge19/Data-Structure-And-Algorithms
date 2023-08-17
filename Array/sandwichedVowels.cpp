#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	string Sandwiched_Vowel(string s){
        
        string ans="";
        for(int i=0; i<s.length(); i++){
            if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') &&
                i!=0 && 
                s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='i' && s[i+1]!='o' && s[i+1]!='u' && 
                s[i-1]!='a' && s[i-1]!='e' && s[i-1]!='i' && s[i-1]!='o' && s[i-1]!='u' && 
                i!=s.length()-1
              ){
                  continue;
            }
            else{
                ans=ans+s[i];
            }
        }
        return ans;    
    }
};

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/sandwiched-vowels5158/1?page=2&category[]=Strings&sortBy=difficulty