/* 
Given an array of integers arr, 
return true if the number of occurrences of each value in the array is unique or false otherwise 
eg 1) Input: arr = [1,2,2,1,1,3]
      Output: true
      Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences
eg 2) Input: arr = [1,2]
      Output: false
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int, int> mp;

       //store the frequency
       for(int i=0; i<arr.size(); i++){
           mp[arr[i]]++;
       } 

        //check the count and insert in unordered set
        unordered_set<int> set;

        for(auto it: mp){
            int freq = it.second;
            set.insert(freq);
        }

        //if size of mp is same as set that means all have unique freq
        return set.size()==mp.size();
    }
};

//std::unordered_set is an associative container that contains a set of unique objects 

// TC = O(n)
// SC = O(n)

// GFG Q Link - https://leetcode.com/problems/unique-number-of-occurrences/description/