/* Given an array A of N elements. 
Find the majority element in the array. 
A majority element in an array A of size N is an element that appears more than or equal to N/2 times in the array 

eg:
Input:
N = 5 
A[] = {3,1,3,3,2} 

Output:
3

Explanation:
Since, 3 is present more than N/2 times, so it is the majority element */


#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int majorityElement(int a[], int size){
        int n=size/2;
        unordered_map<int, int> mp;
        for(int i=0; i<size; i++){
            mp[a[i]]++;
        }
        for(auto it: mp){
            if(it.second > n){
                return it.first;
            }
        }
        return -1;
    }
};

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&sortBy=submissions