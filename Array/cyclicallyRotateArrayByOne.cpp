#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end){
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotate(int arr[], int n){
    reverse(arr, 0, n-1);
    reverse(arr, 1, n-1);
}

// TC = O(N) 
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1