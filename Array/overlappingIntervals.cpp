/*
    Input:  Intervals = {{1,3},{2,4},{6,8},{9,10}}
    Output: {{1, 4}, {6, 8}, {9, 10}}
    Explanation: Given intervals: { [1,3],[2,4],[6,8],[9,10] } we have only two overlapping intervals here,[1,3] and [2,4]. 
    Therefore we will merge these two and return [1,4], [6,8], [9,10]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);
        
        for(int i=1; i<intervals.size(); i++){
            if(ans.back()[1] >= intervals[i][0]){
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};

// TC = O(N*Log(N)) 
// SC = O(Log(N)) or O(N)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/overlapping-intervals--170633/1