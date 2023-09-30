/*  
    Input: N = 5
    words[] = {act,god,cat,dog,tac}

    Output: act cat tac 
            god dog

    Explanation:
    There are 2 groups of
    anagrams "god", "dog" make group 1.
    "act", "cat", "tac" make group 2.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& strList) {
        map<string, vector<string>> mp;
        for(int i=0; i<strList.size(); i++){
            string s = strList[i];
            sort(s.begin(), s.end());
            mp[s].push_back(strList[i]);
        }
        
        vector<vector<string>> ans(mp.size());
        int idx=0;
        for(auto it:mp){
            auto v = it.second;
            
            for(int i=0; i<v.size(); i++){
                ans[idx].push_back(v[i]);
            }
            idx++;
        }
        return ans;
    }
};

// TC = O(N*|S|*log|S|), where |S| is the length of each string in vector strList.
// N is the length of complete vector strList.
// TC of Sort() = O(Nlog(N))
// TC of map = O(log(N))
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/print-anagrams-together/1

// Soln Link -  https://www.youtube.com/watch?v=K3hlxOhxn9I