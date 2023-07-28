#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void solve(stack<int> &s, int num){
    if(s.empty() || s.top()<num){
        s.push(num);
        return;
    }
    
    int n = s.top();
    s.pop();
    solve(s, num);
    s.push(n);
}

void SortedStack :: sort()
{
   if(s.empty()) return;
   
   int num = s.top();
   s.pop();
   sort();
   solve(s, num);
}

// TC = O(N*N) 
// SC = O(N)recursive

// GFG Q Link - https://practice.geeksforgeeks.org/problems/sort-a-stack/1