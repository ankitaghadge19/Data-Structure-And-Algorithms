#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void sortStk(stack<int>&s, int elem){
    if(s.empty() or s.top()<elem){
        s.push(elem);
        return;
    }
    else{
        int top = s.top();
        s.pop();
        sortStk(s, elem);
        s.push(top);
    }
}

void solve(stack<int>&s){
    if(s.empty()) return;
    
    int num = s.top();
    s.pop();
    solve(s);  //use to pop all the elements from stack
    
    sortStk(s, num);
}

void SortedStack :: sort()
{
   solve(s);
}