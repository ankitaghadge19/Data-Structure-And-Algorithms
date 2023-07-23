#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		string FirstNonRepeating(string A){
		    map<char, int> m;
		    int n = A.size();
		    queue<char> q;
		    string ans;
		    
		    for(int i=0; i<n; i++){
		        char ch = A[i];
		        m[ch]++;
		        q.push(ch);
		        
		        while(!q.empty()){
		            if(m[q.front()]==1){
		                ans.push_back(q.front());
		                break;
		            }
		            else{
		                q.pop();
		            }
		            if(q.empty()){
		                ans.push_back('#');
		            }
		        }
		    }
		    return ans;
		}
};

// TC = O(n) 
// SC = O(n)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1