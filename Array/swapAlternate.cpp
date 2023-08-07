#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
    printArray(arr, size);
}

int main(){

    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {3, 7, 9, 13, 15};

    swapAlternate(even, 6);
    swapAlternate(odd, 5);
}