#include<bits/stdc++.h>
using namespace std;

class circularQueue{

    int *arr;
    int size;
    int front;
    int rear;

    public:
    circularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value){
        if((front == 0 && rear == size-1) || (rear = (front-1)%(size-1))){
            cout<<"Queue is Full!"<<endl;
            return false;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(rear = size-1 && front != 0){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear]=value;
        return true;
    }

    int dequeue(){
        if(front == -1){
            cout<<"Queue is empty!"<<endl;
            return -1;
        }
        int ans = arr[front];
        arr[front]=-1;
        if(front == rear){      //single element is present in Q
            front = rear = -1;
        }
        else if(front == size-1){   //Q is not empty
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }

    void displayQ(){
        for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
        }
    }
};

// Enqueue(insertion) 	                        O(1)
// Deque(deletion)   	                        O(1)
// Front(Get front)   	                        O(1)
// Rear(Get Rear)	                            O(1)
// IsFull(Check queue is full or not)	        O(1)
// IsEmpty(Check queue is empty or not)	        O(1)