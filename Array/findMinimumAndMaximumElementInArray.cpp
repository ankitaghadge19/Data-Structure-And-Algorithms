#include<bits/stdc++.h>
using namespace std;

pair<long long, long long> getMinMax(long long arr[], int n) {
    int min=INT_MAX;
    int max=INT_MIN;
    pair<long long, long long>p;
    
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    p.first=min;
    p.second=max;
    return p;  
}

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?page=4&sortBy=submissions