#include<bits/stdc++.h>
using namespace std;

int findUniqueElement(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i+=2){
        sum = sum ^ arr[i];
    }
    return sum;
}

int main(){

    int arr[5] = {2, 3, 4, 3, 2};

    cout<<"Unique element in given array is: ";
    cout<<findUniqueElement(arr, 5);
}

