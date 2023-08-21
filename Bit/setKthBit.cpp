#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int setKthBit(int N, int K){
        int n=1;
        int ans;
        n=n<<K;
        ans=N|n;
        return ans;
    }
    
};

// TC = O(1) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

/* eg. N=10, K=2
    10 (1010)
    n = 1
    n = n<<K => 1<<2 => (1* 2^2) 
     = 4 (0100)
    ans = N|n => 10|4 => (1010 | 0100) => 1110
        = 14 (1110)
*/