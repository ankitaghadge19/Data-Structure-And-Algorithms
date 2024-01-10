/* Given a singly linked list of size N. 
The task is to left-shift the linked list by k nodes, 
where k is a given positive integer smaller than or equal to length of the linked list */

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution
{
   public:
    //Function to rotate a linked list by k elements
    Node* rotate(Node* head, int k)
    {
        if(head == NULL or head->next == NULL){
            return head;
        }
        
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        
        temp->next = head;
        
        temp = head;
        int n = k-1;
        
        while(n){
            temp = temp->next;
            n--;
        }
        
        Node* newHead = temp->next;
        temp->next = NULL;
        return newHead;
    }
};

// TC = O(N)
// SC = O(1)

// GFG Q Link - https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1?page=1&category[]=Linked%20List&sortBy=submissions