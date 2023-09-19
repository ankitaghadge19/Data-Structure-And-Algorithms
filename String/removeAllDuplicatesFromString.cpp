#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
	string removeDuplicates(string str) {
	    unordered_map<char, int> mp;
	    int n=str.length();
	    for(int i=0; i<n; i++){
	        mp[str[i]]++;
	    }
	    
	    string ans="";
	    for(int i=0; i<n; i++){
	        if(mp[str[i]]){
	           ans=ans+str[i];
	           mp[str[i]]=0;
	        }
	    }
	    return ans;
	}
	
// 	-----------------------Alternate Solutions------------------------------  //
    string removeDuplicates1(string str) {
        set<char> s;
        string temp = "";
        for(int i=0; i<str.length(); i++){
            if(s.find(str[i]) == s.end()){
                s.insert(str[i]);
                temp.push_back(str[i]);
            }
        }
        return temp;
    }
    
    string removeDuplicates2(string str) {
        string ans="";
        for(int i=0; i<str.length();i++){
            if(ans.find(str[i])==string::npos){
                ans.push_back(str[i]);
            }
        }
        return ans;
    }
};

// TC = O(N)
// SC = O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1