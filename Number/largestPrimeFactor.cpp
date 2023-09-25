#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	long long int largestPrimeFactor(int N){
        long long int maxPrime = -1;
        while (N%2==0) {
            maxPrime = 2;
            N/=2;
        }
        for (int i=3; i<int(sqrt(N))+1;i+=2) {
            while (N % i == 0){
                maxPrime = i;
                N/=i;
            }
        }
        return N > 2 ? N :maxPrime;
    }
};

// TC = O(sqrt(N)) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/largest-prime-factor2601/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article