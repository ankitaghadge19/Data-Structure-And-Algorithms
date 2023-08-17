#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	vector<int> singleNumber(vector<int> nums) 
    {
        map<int, int>mp;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second==1){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1