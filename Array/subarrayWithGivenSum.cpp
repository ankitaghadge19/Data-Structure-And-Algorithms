/*
    Input:  N = 5, S = 12
    A[] = {1,2,3,7,5}
    Output: 2 4
    Explanation: The sum of elements from 2nd position to 4th position is 12
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int r=0, l=0;
        int sum = arr[0];
        vector<int> ans;
        bool flag = true ;
        
        while(r<n){
            if(sum == s){
                flag=false;
                break;
            }
            else if(sum < s){
                r++;
                if(r<n){
                    sum = sum+arr[r];
                }
            }
            else if(sum > s){
                sum = sum - arr[l];
                l++;
            }
        }
        
        if(flag==true || s==0){
            ans.push_back(-1);
        }
        else{
            ans.push_back(l+1);
            ans.push_back(r+1);
        }
        
        return ans;
    }
};

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&sortBy=submissions
// Soln Link  - https://www.youtube.com/watch?v=Ofl4KgFhLsM