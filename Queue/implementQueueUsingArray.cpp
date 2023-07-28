#include<iostream>
using namespace std;

class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};

void MyQueue :: push(int x)
{
        arr[rear]=x;
        rear++;
}

int MyQueue :: pop()
{
       if(front==rear){
           return -1;
       }
       int ans = arr[front];
       front++;
       return ans;
}

// TC = O(1) for both push() and pop()
// SC = O(1) for both push() and pop()

// GFG Q Link - https://practice.geeksforgeeks.org/problems/implement-queue-using-array/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article