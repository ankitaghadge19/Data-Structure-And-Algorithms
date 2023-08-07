/* Given an array of size n which contains all elements occurring in multiples of K, 
except one element which doesn't occur in multiple of K. Find that unique element */

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int findUnique(int a[], int n, int k) {
       unordered_map<int, int> mp;
       for(int i=0; i<n; i++){
           mp[a[i]]++;
       }
       int ans;
       for(int i=0; i<n; i++){
           if(mp[a[i]]%k != 0){
               ans=a[i];
           }
       }
       return ans;
    }
};

