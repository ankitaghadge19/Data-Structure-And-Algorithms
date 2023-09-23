#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        unordered_map<int, int> mp;
        vector<int> ans;
        
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(auto it: mp){
            if(it.second >1){
                ans.push_back(it.first);
            }
        }
        sort(arr.begin(), arr.end());
        for(int i=0; i<n; i++){
            int num=i+1;
            if(!mp[num]){
                ans.push_back(num);
                break;
            }
        }
        return ans;
    }
};

// TC = O(N)
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article